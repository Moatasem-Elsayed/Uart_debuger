# Uart_debugger
## steps to execute

<!-- TODO: An introduction about the project and its use-cases shall be written here. -->
## How to use it
### Prerequisites
- The current code was built using *gcc version 7.5.0*

```bash
>> mkdir build
>> cd build
>> cmake ../
>> make
```

### Run the uart debugger 

```bash
./uart_debugger -l "pathToLogFile" -a "pathToAnalysisFile"
```
or
```bash
./uart_debugger --LogFilePath "pathToLogFile" --AnalysisFilePath "pathToAnalysisFile"
```

you can always refere to the help menu by calling
```bash
./uart_debugger -h
```
or
```bash
./uart_debugger --help
```
----------------------------

## Design snippets
<!-- TODO: In case of any modifications in the design.puml -> the steps on the following link shall be followed -->
<!-- https://stackoverflow.com/questions/32203610/how-to-integrate-uml-diagrams-into-gitlab-or-github -->

![PlantUML](http://www.plantuml.com/plantuml/svg/TL91J_Cm3BtdL-GxRTEdxeoggTeE824n8O4G1uGcDtMxGj9KYIk6WFzEWXUH7jWbU_Qp_VpShITmD1aj_j4H3Ke3pek5lArVK94NIeFtyY5mzZ10Xqv-22dnX0hrmN2eb9Ud0C-4a6vxZR_9gu3skvJxhsrdqFi0_N8L0vwimq3MxxwFeQ_pq1lRfNbAM_LQodjo_T35caVN4sRSA73Nm4ZdWjQ1mJ0wFW7MC3KEA4Ik1uhzh1cjexnZ4b1FROjkoS-gv4vf3k-I6S6qMDyXDK30Axr5UGnJAMkHcuqdDocgAbxi20uKHPlYtzYn9_zqyLpAsbeTSETWFFOAz85d9SsfxynxFauCn1Faw_sm3dR4WHKoPXkpWDBMiwzY8UzG0_Lsy2A__rglgtGR_fLXgybZLSrvBl1ol_xW5LFnMSqEA79WGvwzcuKBL-JD1GlYPlFFSOj3Cndz3G00)


