"macro ImageExport(",
" object",
",base_name",
",originalCamera",
",format",
") -> (",
" file_written",
") {",
"ImageExport_Inp51_o1 = format;",
"ImageExport_Inq56_o1[cache: 2] = ",
"Inquire(",
"ImageExport_Inp51_o1,",
"\"is null\",",
"NULL",
") [instance: 56, cache: 1];",
"ImageExport_Inq11_o1[cache: 2] = ",
"Inquire(",
"ImageExport_Inp51_o1,",
"\"string match\",",
"\"gif\"",
") [instance: 11, cache: 1];",
"ImageExport_Inq54_o1[cache: 2] = ",
"Inquire(",
"ImageExport_Inp51_o1,",
"\"string match\",",
"\"jpg\"",
") [instance: 54, cache: 1];",
"ImageExport_Inq55_o1[cache: 2] = ",
"Inquire(",
"ImageExport_Inp51_o1,",
"\"string match\",",
"\"png\"",
") [instance: 55, cache: 1];",
"ImageExport_Compute_79_o1 = ",
"Compute(",
"\"($0==1)?1:($1==1)?1:($2==1)?2:($3==1)?3:4\",",
"ImageExport_Inq56_o1,",
"ImageExport_Inq11_o1,",
"ImageExport_Inq54_o1,",
"ImageExport_Inq55_o1",
") [instance: 79, cache: 1];",
"ImageExport_Inp6_o1 = base_name;",
"ImageExport_Switch_35_o1[cache: 2] = ",
"Switch(",
"ImageExport_Compute_79_o1,",
"{\"gif\"},",
"{\"jpg\"},",
"{\"png\"},",
"ImageExport_Inp51_o1",
") [instance: 35, cache: 1];",
"ImageExport_Format_7_o1[cache: 2] = ",
"Format(",
"\"%s.%s\",",
"ImageExport_Inp6_o1,",
"ImageExport_Switch_35_o1",
") [instance: 7, cache: 1];",
"ImageExport_Inp5_o1 = object;",
"ImageExport_Inp22_o1 = originalCamera;",
"ImageExport_Inq8_o1[cache: 2] = ",
"Inquire(",
"ImageExport_Inp5_o1,",
"\"is image + 1\",",
"NULL",
") [instance: 8, cache: 1];",
"file_written = ImageExport_Format_7_o1;",
"ImageExport_Render_1_o1[cache: 2] = ",
"Render(",
"ImageExport_Inp5_o1,",
"ImageExport_Inp22_o1,",
"\"DXByte\"",
") [instance: 1, cache: 1];",
"ImageExport_Switch_9_o1[cache: 2] = ",
"Switch(",
"ImageExport_Inq8_o1,",
"ImageExport_Render_1_o1,",
"ImageExport_Inp5_o1",
") [instance: 9, cache: 1];",
"WriteImage(",
"ImageExport_Switch_9_o1,",
"ImageExport_Format_7_o1,",
"\"ImageMagick supported format\",",
"NULL",
") [instance: 1, cache: 1];",
"}",
NULL
