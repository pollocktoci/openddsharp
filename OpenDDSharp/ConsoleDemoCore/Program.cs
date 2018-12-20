﻿/*********************************************************************
This file is part of OpenDDSharp.

OpenDDSharp is a .NET wrapper for OpenDDS
Copyright (C) 2018 Jose Morato

OpenDDSharp is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OpenDDSharp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with OpenDDSharp. If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/
using Test;
using System;
using System.Collections.Generic;
using OpenDDSharp.DDS;
using OpenDDSharp.OpenDDS.DCPS;

namespace ConsoleDemoCore
{
    class Program
    {
        static void Main(string[] args)
        {
            DomainParticipantFactory dpf = ParticipantService.Instance.GetDomainParticipantFactory("-DCPSConfigFile", "rtps.ini");
            if (dpf == null)
            {
                throw new ApplicationException("Domain participant factory could not be created.");
            }

            DomainParticipant participant = dpf.CreateParticipant(42);
            if (dpf == null)
            {
                throw new ApplicationException("Domain participant could not be created.");
            }

            Publisher publisher = participant.CreatePublisher();
            if (publisher == null)
            {
                throw new ApplicationException("Publisher could not be created.");
            }

            Subscriber subscriber = participant.CreateSubscriber();
            if (subscriber == null)
            {
                throw new ApplicationException("Subscriber could not be created.");
            }

            BasicTestStructTypeSupport typeSupport = new BasicTestStructTypeSupport();
            string typeName = typeSupport.GetTypeName();
            ReturnCode ret = typeSupport.RegisterType(participant, typeName);
            if (ret != ReturnCode.Ok)
            {
                throw new ApplicationException("BasicTestStructTypeSupport could not be registered: " + ret.ToString());
            }

            Topic topic = participant.CreateTopic("TestTopic", typeName);
            if (topic == null)
            {
                throw new ApplicationException("Topic could not be created.");
            }

            DataReader dr = subscriber.CreateDataReader(topic);
            if (dr == null)
            {
                throw new ApplicationException("DataReader could not be created.");
            }
            BasicTestStructDataReader dataReader = new BasicTestStructDataReader(dr);

            DataWriter dw = publisher.CreateDataWriter(topic);
            if (dw == null)
            {
                throw new ApplicationException("DataWriter could not be created.");
            }
            BasicTestStructDataWriter dataWriter = new BasicTestStructDataWriter(dw);

            System.Threading.Thread.Sleep(500);

            BasicTestStruct data = new BasicTestStruct
            {
                Id = 1,
                Message = "Hello, I love you, won't you tell me your name?",
                WMessage = "She's walking down the street\nBlind to every eye she meets\nDo you think you'll be the guy\nTo make the queen of the angels sigh?",
                LongSequence = new List<int> { 1, 2, 3, 100 },
                StringSequence = new List<string>
                {
                    "In every life we have some trouble, ",
                    "but when you worry you make it double. ",
                    "Don't worry. ",
                    "Be happy. ",
                    "Be happy now."
                },
                WStringSequence = new List<string>
                {
                    "Pressure pushing down on me",
                    "Pressing down on you, no man ask for",
                    "Under pressure that burns a building down",
                    "Splits a family in two",
                    "Puts people on streets"
                },
                LongArray = new int[] {42, 23, 69, 1024, 25 },
                StringArray = new string[]
                {
                    "You've got your mother in a whirl",
                    "She's not sure if you're a boy or a girl",
                    "Hey babe! your hair's alright",
                    "Hey babe! let's go out tonight",
                    "You like me, and I like it all",
                    "We like dancing and we look divine",
                    "You love bands when they're playing hard",
                    "You want more and you want it fast",
                    "They put you down, they say I'm wrong",
                    "You tacky thing, you put them on"
                },
                WStringArray = new string[]
                {
                    "Rebel Rebel, you've turn your dress",
                    "Rebel Rebel, your face is a mess",
                    "Rebel Rebel, how could they know?",
                    "Hot tramp, I love you so!"
                },
                StructTest = new NestedTestStruct
                {
                    Id = 1,
                    Message = "Do androids dream of electric sheep?"
                },
                StructSequence = new List<NestedTestStruct>
                {
                    new NestedTestStruct { Id = 1, Message = "With your feet in the air and your head on the ground" },
                    new NestedTestStruct { Id = 2, Message = "Try this trick and spin it, yeah" },
                    new NestedTestStruct { Id = 3, Message = "Your head will collapse" },
                    new NestedTestStruct { Id = 4, Message = "But there's nothing in it" },                    
                    new NestedTestStruct { Id = 5, Message = "And you'll ask yourself" },
                    new NestedTestStruct { Id = 6, Message = "Where is my mind?" },
                },
                StructArray = new NestedTestStruct[5]
                {
                    new NestedTestStruct { Id = 1, Message = "Well, you've got your diamonds" },
                    new NestedTestStruct { Id = 2, Message = "And you've got your pretty clothes" },
                    new NestedTestStruct { Id = 3, Message = "And the chauffer drives your car" },
                    new NestedTestStruct { Id = 4, Message = "You let everybody know" },
                    new NestedTestStruct { Id = 5, Message = "But don't play with me, 'cause you're playing with fire" },
                },
                LongMultiArray = new int[3, 4, 2]
                {
                    { { 01, 02 }, { 03, 04 }, { 05, 06 }, { 07, 08 } },
                    { { 09, 10 }, { 11, 12 }, { 13, 14 }, { 15, 16 } },
                    { { 17, 18 }, { 19, 20 }, { 21, 22 }, { 23, 24 } }
                },
                StringMultiArray = new string[3, 4, 2]
                {
                    { { "01", "02" }, { "03", "04" }, { "05", "06" }, { "07", "08" } },
                    { { "09", "10" }, { "11", "12" }, { "13", "14" }, { "15", "16" } },
                    { { "17", "18" }, { "19", "20" }, { "21", "22" }, { "23", "24" } }
                },
                WStringMultiArray = new string[3, 4, 2]
                {
                    { { "01", "02" }, { "03", "04" }, { "05", "06" }, { "07", "08" } },
                    { { "09", "10" }, { "11", "12" }, { "13", "14" }, { "15", "16" } },
                    { { "17", "18" }, { "19", "20" }, { "21", "22" }, { "23", "24" } }
                },
                StructMultiArray = new NestedTestStruct[3, 4, 2]
                {
                    { { new  NestedTestStruct{ Id = 1, Message = "01" }, new  NestedTestStruct{ Id = 2, Message = "02" } }, { new  NestedTestStruct{ Id = 3, Message = "03" }, new  NestedTestStruct{ Id = 4, Message = "04" } }, { new  NestedTestStruct{ Id = 5, Message = "05" }, new  NestedTestStruct{ Id = 6, Message = "06" } }, { new  NestedTestStruct{ Id = 7, Message = "07" }, new  NestedTestStruct{ Id = 8, Message = "08" } } },
                    { { new  NestedTestStruct{ Id = 9, Message = "09" }, new  NestedTestStruct{ Id = 10, Message = "10" } }, { new  NestedTestStruct{ Id = 11, Message = "11" }, new  NestedTestStruct{ Id = 12, Message = "12" } }, { new  NestedTestStruct{ Id = 13, Message = "13" }, new  NestedTestStruct{ Id = 14, Message = "14" } }, { new  NestedTestStruct{ Id = 15, Message = "15" }, new  NestedTestStruct{ Id = 16, Message = "16" } } },
                    { { new  NestedTestStruct{ Id = 17, Message = "17" }, new  NestedTestStruct{ Id = 18, Message = "18" } }, { new  NestedTestStruct{ Id = 19, Message = "19" }, new  NestedTestStruct{ Id = 20, Message = "20" } }, { new  NestedTestStruct{ Id = 21, Message = "21" }, new  NestedTestStruct{ Id = 22, Message = "22" } }, { new  NestedTestStruct{ Id = 23, Message = "23" }, new  NestedTestStruct{ Id = 24, Message = "24" } } },
                },
                FloatType = 42.42f,
                DoubleType = 23.23,
                LongDoubleType = 69.69,
                FloatArray = new float[] { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f },
                DoubleArray = new double[] { 1.1, 2.2, 3.3, 4.4, 5.5 },
                LongDoubleArray = new double[] { 1.1, 2.2, 3.3, 4.4, 5.5 },
                FloatSequence = new List<float> { 1.1f, 2.2f, 3.3f},
                DoubleSequence = new List<double> { 1.1, 2.2, 3.3, 4.4 },
                LongDoubleSequence = new List<double> { 1.1, 2.2, 3.3, 4.4, 5.5 },
                FloatMultiArray = new float[3, 4, 2]
                {
                    { { 01.01f, 02.02f }, { 03.03f, 04.04f }, { 05.05f, 06.06f }, { 07.07f, 08.08f } },
                    { { 09.09f, 10.10f }, { 11.11f, 12.12f }, { 13.13f, 14.14f }, { 15.15f, 16.16f } },
                    { { 17.17f, 18.18f }, { 19.19f, 20.20f }, { 21.21f, 22.22f }, { 23.23f, 24.24f } }
                },
                DoubleMultiArray = new double[3, 4, 2]
                {
                    { { 01.01, 02.02 }, { 03.03, 04.04 }, { 05.05, 06.06 }, { 07.07, 08.08 } },
                    { { 09.09, 10.10 }, { 11.11, 12.12 }, { 13.13, 14.14 }, { 15.15, 16.16 } },
                    { { 17.17, 18.18 }, { 19.19, 20.20 }, { 21.21, 22.22 }, { 23.23, 24.24 } }
                },
                LongDoubleMultiArray = new double[3, 4, 2]
                {
                    { { 01.01, 02.02 }, { 03.03, 04.04 }, { 05.05, 06.06 }, { 07.07, 08.08 } },
                    { { 09.09, 10.10 }, { 11.11, 12.12 }, { 13.13, 14.14 }, { 15.15, 16.16 } },
                    { { 17.17, 18.18 }, { 19.19, 20.20 }, { 21.21, 22.22 }, { 23.23, 24.24 } }
                }
            };
            dataWriter.Write(data);

            System.Threading.Thread.Sleep(500);

            //ret = dataReader.Read();
            //if (ret == ReturnCode.Ok)
            //{
            //    Console.WriteLine("Ok");
            //}
            //else
            //{
            //    Console.WriteLine("Data not received. Read call returned: " + ret);
            //}
            
            BasicTestStruct received = new BasicTestStruct();
            ret = dataReader.ReadNextSample(received);
            if (ret == ReturnCode.Ok)
            {
                Console.ForegroundColor = ConsoleColor.DarkGreen;
                Console.WriteLine("Id:");
                Console.ForegroundColor = ConsoleColor.DarkYellow;
                Console.WriteLine(received.Id);
                Console.WriteLine();

                if (received.Message != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine("Message:");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    Console.WriteLine(received.Message);
                    Console.WriteLine();
                }

                if (received.WMessage != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine("WMessage:");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    Console.WriteLine(received.WMessage);
                    Console.WriteLine();
                }

                if (received.LongSequence != null && received.LongSequence.Count > 0)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.LongSequence) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.LongSequence.Count; i++)
                    {
                        Console.Write(received.LongSequence[i]);
                        if (i < received.LongSequence.Count - 1)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.StringSequence != null && received.StringSequence.Count > 0)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.StringSequence) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.StringSequence.Count; i++)
                    {
                        Console.WriteLine(received.StringSequence[i]);
                    }
                    Console.WriteLine();
                }

                if (received.WStringSequence != null && received.WStringSequence.Count > 0)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.WStringSequence) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.WStringSequence.Count; i++)
                    {
                        Console.WriteLine(received.WStringSequence[i]);
                    }
                    Console.WriteLine();
                }

                if (received.LongArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.LongArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.LongArray.Length; i++)
                    {
                        Console.Write(received.LongArray[i]);
                        if (i + 1 < received.LongArray.Length)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.StringArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.StringArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    foreach (string s in received.StringArray)
                    {
                        Console.WriteLine(s);
                    }
                    Console.WriteLine();
                }

                if (received.WStringArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.WStringArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    foreach (string s in received.WStringArray)
                    {
                        Console.WriteLine(s);
                    }
                    Console.WriteLine();
                }

                Console.ForegroundColor = ConsoleColor.DarkGreen;
                Console.WriteLine(nameof(received.StructTest) + ":");
                Console.ForegroundColor = ConsoleColor.DarkYellow;
                Console.WriteLine(string.Format("{0}: {1}", received.StructTest.Id, received.StructTest.Message));
                Console.WriteLine();

                if (received.StructSequence != null && received.StructSequence.Count > 0)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.StructSequence) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    foreach (NestedTestStruct s in received.StructSequence)
                    {
                        Console.WriteLine(string.Format("{0}: {1}", s.Id, s.Message));
                    }
                    Console.WriteLine();
                }

                if (received.StructArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.StructArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    foreach (NestedTestStruct s in received.StructArray)
                    {
                        Console.WriteLine(string.Format("{0}: {1}", s.Id, s.Message));
                    }
                    Console.WriteLine();
                }

                if (received.LongMultiArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.LongMultiArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.LongMultiArray.GetLength(0); i++)
                    {
                        for (int j = 0; j < received.LongMultiArray.GetLength(1); j++)
                        {
                            for (int k = 0; k < received.LongMultiArray.GetLength(2); k++)
                            {
                                Console.Write(received.LongMultiArray[i, j, k].ToString("00"));
                                if (j + 1 < received.LongMultiArray.GetLength(1) || k + 1 < received.LongMultiArray.GetLength(2))
                                {
                                    Console.Write(", ");
                                }
                            }
                        }
                        Console.WriteLine();
                    }
                    Console.WriteLine();
                }

                if (received.StringMultiArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.StringMultiArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.StringMultiArray.GetLength(0); i++)
                    {
                        for (int j = 0; j < received.StringMultiArray.GetLength(1); j++)
                        {
                            for (int k = 0; k < received.StringMultiArray.GetLength(2); k++)
                            {
                                Console.Write(received.StringMultiArray[i, j, k]);
                                if (j + 1 < received.StringMultiArray.GetLength(1) || k + 1 < received.StringMultiArray.GetLength(2))
                                {
                                    Console.Write(", ");
                                }
                            }
                        }
                        Console.WriteLine();
                    }
                    Console.WriteLine();
                }

                if (received.WStringMultiArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.WStringMultiArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.WStringMultiArray.GetLength(0); i++)
                    {
                        for (int j = 0; j < received.WStringMultiArray.GetLength(1); j++)
                        {
                            for (int k = 0; k < received.WStringMultiArray.GetLength(2); k++)
                            {
                                Console.Write(received.WStringMultiArray[i, j, k]);
                                if (j + 1 < received.WStringMultiArray.GetLength(1) || k + 1 < received.WStringMultiArray.GetLength(2))
                                {
                                    Console.Write(", ");
                                }
                            }
                        }
                        Console.WriteLine();
                    }
                    Console.WriteLine();
                }

                if (received.StructMultiArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.StructMultiArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.StructMultiArray.GetLength(0); i++)
                    {
                        for (int j = 0; j < received.StructMultiArray.GetLength(1); j++)
                        {
                            for (int k = 0; k < received.StructMultiArray.GetLength(2); k++)
                            {
                                Console.Write(received.StructMultiArray[i, j, k].Message);
                                if (j + 1 < received.StructMultiArray.GetLength(1) || k + 1 < received.StructMultiArray.GetLength(2))
                                {
                                    Console.Write(", ");
                                }
                            }
                        }
                        Console.WriteLine();
                    }
                    Console.WriteLine();
                }

                Console.ForegroundColor = ConsoleColor.DarkGreen;
                Console.WriteLine(nameof(received.FloatType) + ":");
                Console.ForegroundColor = ConsoleColor.DarkYellow;
                Console.WriteLine(received.FloatType);
                Console.WriteLine();

                Console.ForegroundColor = ConsoleColor.DarkGreen;
                Console.WriteLine(nameof(received.DoubleType) + ":");
                Console.ForegroundColor = ConsoleColor.DarkYellow;
                Console.WriteLine(received.DoubleType);
                Console.WriteLine();

                Console.ForegroundColor = ConsoleColor.DarkGreen;
                Console.WriteLine(nameof(received.LongDoubleType) + ":");
                Console.ForegroundColor = ConsoleColor.DarkYellow;
                Console.WriteLine(received.LongDoubleType);
                Console.WriteLine();

                if (received.FloatArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.FloatArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.FloatArray.Length; i++)
                    {
                        Console.Write(received.FloatArray[i]);
                        if (i + 1 < received.FloatArray.Length)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.DoubleArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.DoubleArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.DoubleArray.Length; i++)
                    {
                        Console.Write(received.DoubleArray[i]);
                        if (i + 1 < received.DoubleArray.Length)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.LongDoubleArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.LongDoubleArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.LongDoubleArray.Length; i++)
                    {
                        Console.Write(received.LongDoubleArray[i]);
                        if (i + 1 < received.LongDoubleArray.Length)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.FloatSequence != null && received.FloatSequence.Count > 0)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.FloatSequence) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.FloatSequence.Count; i++)
                    {
                        Console.Write(received.FloatSequence[i]);
                        if (i < received.FloatSequence.Count - 1)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.DoubleSequence != null && received.DoubleSequence.Count > 0)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.DoubleSequence) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.DoubleSequence.Count; i++)
                    {
                        Console.Write(received.DoubleSequence[i]);
                        if (i < received.DoubleSequence.Count - 1)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.LongDoubleSequence != null && received.LongDoubleSequence.Count > 0)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.LongDoubleSequence) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.LongDoubleSequence.Count; i++)
                    {
                        Console.Write(received.LongDoubleSequence[i]);
                        if (i < received.LongDoubleSequence.Count - 1)
                        {
                            Console.Write(", ");
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }

                if (received.FloatMultiArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.FloatMultiArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.FloatMultiArray.GetLength(0); i++)
                    {
                        for (int j = 0; j < received.FloatMultiArray.GetLength(1); j++)
                        {
                            for (int k = 0; k < received.FloatMultiArray.GetLength(2); k++)
                            {
                                Console.Write(received.FloatMultiArray[i, j, k].ToString("00.00"));
                                if (j + 1 < received.FloatMultiArray.GetLength(1) || k + 1 < received.FloatMultiArray.GetLength(2))
                                {
                                    Console.Write(", ");
                                }
                            }
                        }
                        Console.WriteLine();
                    }
                    Console.WriteLine();
                }

                if (received.DoubleMultiArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.DoubleMultiArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.DoubleMultiArray.GetLength(0); i++)
                    {
                        for (int j = 0; j < received.DoubleMultiArray.GetLength(1); j++)
                        {
                            for (int k = 0; k < received.DoubleMultiArray.GetLength(2); k++)
                            {
                                Console.Write(received.DoubleMultiArray[i, j, k].ToString("00.00"));
                                if (j + 1 < received.DoubleMultiArray.GetLength(1) || k + 1 < received.DoubleMultiArray.GetLength(2))
                                {
                                    Console.Write(", ");
                                }
                            }
                        }
                        Console.WriteLine();
                    }
                    Console.WriteLine();
                }

                if (received.LongDoubleMultiArray != null)
                {
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.WriteLine(nameof(received.LongDoubleMultiArray) + ":");
                    Console.ForegroundColor = ConsoleColor.DarkYellow;
                    for (int i = 0; i < received.LongDoubleMultiArray.GetLength(0); i++)
                    {
                        for (int j = 0; j < received.LongDoubleMultiArray.GetLength(1); j++)
                        {
                            for (int k = 0; k < received.LongDoubleMultiArray.GetLength(2); k++)
                            {
                                Console.Write(received.LongDoubleMultiArray[i, j, k].ToString("00.00"));
                                if (j + 1 < received.LongDoubleMultiArray.GetLength(1) || k + 1 < received.LongDoubleMultiArray.GetLength(2))
                                {
                                    Console.Write(", ");
                                }
                            }
                        }
                        Console.WriteLine();
                    }
                    Console.WriteLine();
                }

            }
            else
            {
                Console.WriteLine("Data not received. ReadNextSample call returned: " + ret.ToString());
            }

            Console.ResetColor();
            Console.ReadKey();
        }
    }
}
