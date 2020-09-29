---
layout: home

---
<div class="wrapper" markdown="0"><div class="footer-col-wrapper">
<div class="footer-col two-col-1">
    <ul class="contact-list">
        <li><b>Prof. Bhagi Narahari</b></li>
        <li><a href="mailto:narahari@gwu.edu">narahari@gwu.edu</a></li>
        <li>Office Hours: </li>
        <li><b> Sarah Morin  </b> (UTA) </li>
        <li> sarahmorin@gwu.edu </li>
        <li><b> Catherine Meadows </b> (LA) </li>
        <li> meadowsc@gwu.edu </li>
    </ul>
</div>
<div class="footer-col two-col-2">
    <ul class="contact-list">
        <li><b>William (Billy) Miller </b> (TA)</li>
        <li><a href="mailto:bmiller8@gwmail.gwu.edu">bmiller8@gwmail.gwu.edu</a> </li>
        <li>Office Hours: <a href="https://piazza.com/gwu/">Check Piazza</a></li>
        <li><b> Linnea Dierksheide </b> (UTA) </li>
        <li> ldierksheide@gwu.edu </li>
        <li><b> Graham Schock </b> (LA) </li>
        <li> gschock@gwu.edu </li>
      </ul>
</div>
</div>
</div>


> This is an introductory course on Computer organization and computer systems. The  course will expose the student to the different layers in a computer system and examine the working of a computer system at these different levels. It will expose the student to the low level details of how machines are assembled and the tools to program them -- it will expose what really happens when your programs are run, thereby providing you with the intellectual tools needed to solve problems when things go wrong. In addition to the theoretical concepts, the course through the lab section will provide an exposure to systems skills using various tools and focusing on issues such as performance and correctness. The course will take a bottom-up approach: it will start with the basic components of a computer system, machine representation of data, digital logic circuits, instruction sets and assembly programming, and moves to a discussion of how C programs are translated to the machine level. The course also introduces systems programming concepts such as memory management, file systems, safe programming, system stack, debugging and performance tuning of programs. The lecture, and some lab sessions, will consist of in-class activities and students will be required to work in groups.




## Announcements ##
  - <b>This website is under construction - all content subject to change!<b>

## Class Resources ##
  - [Piazza]()
  - [Slack]() - [Join here]()
  - [LC3 Download Instructions](https://github.com/chiragsakhuja/lc3tools/blob/master/docs/DownloadingAndInstalling.pdf)
  - [LC3 Download Page](https://github.com/chiragsakhuja/lc3tools/releases)
  - [Git Instructions](tutorials/git_tutorial.md) & [Video Demo](https://youtu.be/RvEgfSeEuB0)
  - [CEDAR Logic Instructions](tutorials/cedarlogic_tutorial.md) & [Video Demo](https://youtu.be/_OwVzorBHoE)
  - [Logism Instructions](tutorials/logism_tutorial.md) & [Video Demo](https://youtu.be/rQOv0h-4TEo) 
  - [Tinkercad Instructions](tutorials/tinkercad_tutorial.md) & [Video Demo](https://youtu.be/Tzx1uZuObxk)
  - [Visual Studio Code Instructions](tutorials/vscode_tutorial.md) & [Video Demo](https://youtu.be/WhppZrMvoBU)

## Schedule  ##

<div style="font-size:90%">

| Introduction  | Materials 
| :--- |:---  |
| Week 0 <br> Chapter 1 |  [Course Logistics](lectures/logistics.pdf) [Meet the instruction team](https://youtu.be/Z60EkJ3WLFk)<br> [Course Intro](lectures/syllabus.pdf) [Syllabus-Video](https://youtu.be/qdzqUj4rzRY)|  
| Week 1- Data Representation <br> Chapter 2 | [Data Representation1](lectures/datarep1.pdf) [Two's Complement Representation -Video](https://youtu.be/9Emc7YhhMQc) <br> [Operations](lectures/datarep2.pdf) [Video]| 
| Lab Week 1  | Introduction to Circuits(Notes posted on Blackboard- Ohms Law) <br> Getting Stated with TinkerCad| 

| Digital Logic  | Materials 
| :--- |:---  |
| Transistors & Logic Gates (Week 2) <br> Chapter 3 |  [Devices-Transistors](lectures/transistor-gates.pdf) [How Transistors work (Video)](https://youtu.be/4DdTtF4Fop8)<br> [Building Gates from Transistors (Video)](https://youtu.be/WrJV4_852iE)<br> [Boolean Functions & Combinational Logic Circuits](lectures/logic1.pdf)  <br> [Truth Table to Logic Circuit - Video](https://youtu.be/BdhCUqusS9w) <br> [CedarLogic Circuits for Week2](lectures/Set1.cdl) [LogiSim Circuits for Week2](lectures/Set1.zip)<br> [Cedar Logic Circuits Set1 - figures](lectures/set1.pdf) <br> [Karnaugh Maps and Circuit Design- Review](lectures/Kmaps.pdf) |  
| Combinational Logic Circuits <br> (Week 3) Chap.3 <br> Data types & Bitwise in C | Review Karnaugh Maps (Reading) <br> [Combinational Logic Devices](lectures/logic2.pdf) <br> [Decoders-Video](https://youtu.be/QPUMMHJlQDI) [Multiplexers-Video](https://youtu.be/yG74KWgcY4I) <br> [Cedar Logic Circuits-Week3](lectures/Set2.cdl) [Logisim Circuits Week3](lectures/Set2.zip) <br> [Circuits with Feedback-Latches](lectures/latches.pdf) [Video...coming soon to a theater near you!] <br> [Review: Data rep and Bitwise in C](lectures/bitwise.pdf)<br> [In Class C exercises (Bitwise)](lectures/inclass-sept17.c) | 
| Sequential Logic (Week 4) <br> Chapter 3| [Sequential Logic & Finite State Machines](lectures/seqlogic.pdf) <br> [Clocked Circuits - Flip Flops (Video)](https://youtu.be/MpwEzpyll1w) <br> [CedarLogic-Examples of Sequential Logic Devices](lectures/Set3.cdl)<br> [Introduction to Finite State Machines (video)](https://youtu.be/VMDu9BHZ28g)<br>[Example:FSM Design(video)](https://youtu.be/LyQvWZpCsfQ) <br> [CedarLogic-Examples: Finite State Machines](lectures/Set4.cdl)|
| Week 2 Lab | [Design of Combinational Logic circuit using Integrated Circuits](lectures/Lab2.pdf) |
| Week 3 Lab | [Using DIP Switches in Logic Circuits](lectures/Lab3.pdf)  |
| Week 4 Lab | Design of Logic Devices - project 1|
| Week 5 Lab | [Review: Example Sequential Logic Devices in CedarLogic](lectures/seq-devices.cdl) , Project 2 discussions. |

| ISA and Assembly Programming  | Materials 
| :--- |:---  |
| von Neuman Model (Week 5)Chap. 4-5 <br> LC3 Instruction Set Architecture(ISA)  |  [von Neuman Architecture and Instruction Execution](lectures/Intro-CompOrg.pdf)<br> [von Neuman model and Instruction Processing Cycle (Video)](https://youtu.be/dMfxPZEhDlg) <br> [LC3 Instruction Set](lectures/LC3-ISA.pdf) <br> [LC3 ISA-Operate Instructions Dataflow (Video)] <br> [LC3 ISA-Memory and Branch Instructions (Video)]|  
| Processor Datapath (week 6) <br> Chapter 5, Appendix A,C| [LC3 Datapath Design](lectures/Datapath.pdf)<br> [Example Datapath Requirements for an LC3 instruction(Video)] <br> [Example: Datapath design in Cedar Logic](lectures/datapath.cdl)<br> [Design of a processor datapath (Example)](lectures/datapath-example.pdf)| 
| Assembly Programming (Chap 6-7) <br> <b>Exam 1 </b> - week 7| [Programming in Assembly](lectures/assembly1.pdf) [Video] <br> <b> Exam Covers material upto (including) LC3 ISA </b> |
|Assembly Programming <br> Weeks 8-9 <br> Chapters 7-10| [I/O and Traps in LC3](lectures/assembly2.pdf) [Video] <br> [Subroutines/Functions in Assembly](lectures/assembly3.pdf) [Video] <br> [Stacks and Interrupts](lectures/stack.pdf) [Video]|
| Labs Weeks 6-9 <br> Lab Week 7 | [Getting Started with LC3 simulator](lectures/lc3-simulator.pdf) [Video] <br> [Writing an Assembly Program](lectures/LC3-asm1.pdf) [Video]<br> [Assembly program using Subroutines](lectures/LC3-asm2.pdf)| 

| Implementing C programs on Machine ISA   | Materials 
| :--- |:---  |
| Running high level programs (Week 9) <br> Quick Review of C (Week 9) Chapters 11,12,13  |  [Translation Process and Role of Compiler](lectures/C-Lecture1.pdf) [Video] <br> [C Review](lectures/C-lecture1.pdf) [Video]|  
| C programs on LC3  (weeks 10-12)<br> Run-time Stack (Chap 12) <br> Activation Records and Function Calls (Chap 14) <br> Arrays and Pointers (Chap 16)<br> Dynamic Memory (Heap)Chap.19 | [Run-time Stack](lectures/runtimestack.pdf) [Video] <br> [Function Calls](lectures/functions.pdf)<br> [Arrays and Pointers](lectures/pointers.pdf) [Video] <br> [Dynamic Memory-Malloc](lectures/dynamic.pdf) | 
|Labs Weeks 10-12 | Programming in C|

|Labs Weeks 10-12  <br> Programming in C | [Tools: GDB, Valgrind](lectures/gdb.pdf)<br>
[GDB Tutorial (Video)](https://youtu.be/_YPwCyXQER4) <br>
[Valgrind Tutorial (Video)](https://youtu.be/nxI9KWO35oY) <br> [I/O and Files in C](lectures/Files-IO.pdf) | 
| <b> Exam 2 </b> | All material upto Dynamic Memory in C |

| Program Performance and Computer Architecture  | Materials 
| :--- |:---  |
| Performance Optimization (Weeks 12-14) <br> Memory Hierarchy <br> Code Optimization   |  [Measuring System Performance](lectures/performance1.pdf) [Video]<br> [Memory Hierarchy] (lectures/memory.pdf) [Video] <br> [Code Optimization Techniques](lectures/optimization.pdf)|  
| Labs Weeks 12-14  | Project 5,6 discussions|
| Course Summary  | [Course Summary: Real Architectures](lectures/summary.pdf) [Video] | 
 

</div>
