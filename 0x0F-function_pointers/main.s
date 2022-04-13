
main:     file format elf64-x86-64


Disassembly of section .text:

0000000000001140 <_start>:
    1140:	f3 0f 1e fa          	endbr64 
    1144:	31 ed                	xor    ebp,ebp
    1146:	49 89 d1             	mov    r9,rdx
    1149:	5e                   	pop    rsi
    114a:	48 89 e2             	mov    rdx,rsp
    114d:	48 83 e4 f0          	and    rsp,0xfffffffffffffff0
    1151:	50                   	push   rax
    1152:	54                   	push   rsp
    1153:	4c 8d 05 36 02 00 00 	lea    r8,[rip+0x236]        # 1390 <__libc_csu_fini>
    115a:	48 8d 0d bf 01 00 00 	lea    rcx,[rip+0x1bf]        # 1320 <__libc_csu_init>
    1161:	48 8d 3d c1 00 00 00 	lea    rdi,[rip+0xc1]        # 1229 <main>
    1168:	ff 15 72 2e 00 00    	call   QWORD PTR [rip+0x2e72]        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    116e:	f4                   	hlt    
    116f:	90                   	nop

0000000000001170 <deregister_tm_clones>:
    1170:	48 8d 3d 99 2e 00 00 	lea    rdi,[rip+0x2e99]        # 4010 <__TMC_END__>
    1177:	48 8d 05 92 2e 00 00 	lea    rax,[rip+0x2e92]        # 4010 <__TMC_END__>
    117e:	48 39 f8             	cmp    rax,rdi
    1181:	74 15                	je     1198 <deregister_tm_clones+0x28>
    1183:	48 8b 05 4e 2e 00 00 	mov    rax,QWORD PTR [rip+0x2e4e]        # 3fd8 <_ITM_deregisterTMCloneTable>
    118a:	48 85 c0             	test   rax,rax
    118d:	74 09                	je     1198 <deregister_tm_clones+0x28>
    118f:	ff e0                	jmp    rax
    1191:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1198:	c3                   	ret    
    1199:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000011a0 <register_tm_clones>:
    11a0:	48 8d 3d 69 2e 00 00 	lea    rdi,[rip+0x2e69]        # 4010 <__TMC_END__>
    11a7:	48 8d 35 62 2e 00 00 	lea    rsi,[rip+0x2e62]        # 4010 <__TMC_END__>
    11ae:	48 29 fe             	sub    rsi,rdi
    11b1:	48 89 f0             	mov    rax,rsi
    11b4:	48 c1 ee 3f          	shr    rsi,0x3f
    11b8:	48 c1 f8 03          	sar    rax,0x3
    11bc:	48 01 c6             	add    rsi,rax
    11bf:	48 d1 fe             	sar    rsi,1
    11c2:	74 14                	je     11d8 <register_tm_clones+0x38>
    11c4:	48 8b 05 25 2e 00 00 	mov    rax,QWORD PTR [rip+0x2e25]        # 3ff0 <_ITM_registerTMCloneTable>
    11cb:	48 85 c0             	test   rax,rax
    11ce:	74 08                	je     11d8 <register_tm_clones+0x38>
    11d0:	ff e0                	jmp    rax
    11d2:	66 0f 1f 44 00 00    	nop    WORD PTR [rax+rax*1+0x0]
    11d8:	c3                   	ret    
    11d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

00000000000011e0 <__do_global_dtors_aux>:
    11e0:	f3 0f 1e fa          	endbr64 
    11e4:	80 3d 25 2e 00 00 00 	cmp    BYTE PTR [rip+0x2e25],0x0        # 4010 <__TMC_END__>
    11eb:	75 2b                	jne    1218 <__do_global_dtors_aux+0x38>
    11ed:	55                   	push   rbp
    11ee:	48 83 3d 02 2e 00 00 	cmp    QWORD PTR [rip+0x2e02],0x0        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    11f5:	00 
    11f6:	48 89 e5             	mov    rbp,rsp
    11f9:	74 0c                	je     1207 <__do_global_dtors_aux+0x27>
    11fb:	48 8b 3d 06 2e 00 00 	mov    rdi,QWORD PTR [rip+0x2e06]        # 4008 <__dso_handle>
    1202:	e8 a9 fe ff ff       	call   10b0 <__cxa_finalize@plt>
    1207:	e8 64 ff ff ff       	call   1170 <deregister_tm_clones>
    120c:	c6 05 fd 2d 00 00 01 	mov    BYTE PTR [rip+0x2dfd],0x1        # 4010 <__TMC_END__>
    1213:	5d                   	pop    rbp
    1214:	c3                   	ret    
    1215:	0f 1f 00             	nop    DWORD PTR [rax]
    1218:	c3                   	ret    
    1219:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]

0000000000001220 <frame_dummy>:
    1220:	f3 0f 1e fa          	endbr64 
    1224:	e9 77 ff ff ff       	jmp    11a0 <register_tm_clones>

0000000000001229 <main>:
    1229:	f3 0f 1e fa          	endbr64 
    122d:	55                   	push   rbp
    122e:	48 89 e5             	mov    rbp,rsp
    1231:	53                   	push   rbx
    1232:	48 83 ec 28          	sub    rsp,0x28
    1236:	89 7d dc             	mov    DWORD PTR [rbp-0x24],edi
    1239:	48 89 75 d0          	mov    QWORD PTR [rbp-0x30],rsi
    123d:	83 7d dc 02          	cmp    DWORD PTR [rbp-0x24],0x2
    1241:	74 16                	je     1259 <main+0x30>
    1243:	48 8d 3d be 0d 00 00 	lea    rdi,[rip+0xdbe]        # 2008 <_IO_stdin_used+0x8>
    124a:	e8 81 fe ff ff       	call   10d0 <puts@plt>
    124f:	bf 01 00 00 00       	mov    edi,0x1
    1254:	e8 d7 fe ff ff       	call   1130 <exit@plt>
    1259:	48 8b 45 d0          	mov    rax,QWORD PTR [rbp-0x30]
    125d:	48 8d 50 08          	lea    rdx,[rax+0x8]
    1261:	48 89 55 d0          	mov    QWORD PTR [rbp-0x30],rdx
    1265:	48 8b 00             	mov    rax,QWORD PTR [rax]
    1268:	48 89 c7             	mov    rdi,rax
    126b:	e8 b0 fe ff ff       	call   1120 <atoi@plt>
    1270:	89 c3                	mov    ebx,eax
    1272:	85 db                	test   ebx,ebx
    1274:	79 16                	jns    128c <main+0x63>
    1276:	48 8d 3d 8b 0d 00 00 	lea    rdi,[rip+0xd8b]        # 2008 <_IO_stdin_used+0x8>
    127d:	e8 4e fe ff ff       	call   10d0 <puts@plt>
    1282:	bf 02 00 00 00       	mov    edi,0x2
    1287:	e8 a4 fe ff ff       	call   1130 <exit@plt>
    128c:	48 8d 35 7b 0d 00 00 	lea    rsi,[rip+0xd7b]        # 200e <_IO_stdin_used+0xe>
    1293:	48 8d 3d 76 0d 00 00 	lea    rdi,[rip+0xd76]        # 2010 <_IO_stdin_used+0x10>
    129a:	e8 71 fe ff ff       	call   1110 <fopen@plt>
    129f:	48 89 45 e8          	mov    QWORD PTR [rbp-0x18],rax
    12a3:	eb 23                	jmp    12c8 <main+0x9f>
    12a5:	48 8d 3d 74 0d 00 00 	lea    rdi,[rip+0xd74]        # 2020 <_IO_stdin_used+0x20>
    12ac:	e8 3f fe ff ff       	call   10f0 <system@plt>
    12b1:	48 8d 35 56 0d 00 00 	lea    rsi,[rip+0xd56]        # 200e <_IO_stdin_used+0xe>
    12b8:	48 8d 3d 51 0d 00 00 	lea    rdi,[rip+0xd51]        # 2010 <_IO_stdin_used+0x10>
    12bf:	e8 4c fe ff ff       	call   1110 <fopen@plt>
    12c4:	48 89 45 e8          	mov    QWORD PTR [rbp-0x18],rax
    12c8:	48 83 7d e8 00       	cmp    QWORD PTR [rbp-0x18],0x0
    12cd:	74 d6                	je     12a5 <main+0x7c>
    12cf:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    12d3:	48 89 c7             	mov    rdi,rax
    12d6:	e8 25 fe ff ff       	call   1100 <fgetc@plt>
    12db:	89 c3                	mov    ebx,eax
    12dd:	eb 18                	jmp    12f7 <main+0xce>
    12df:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    12e3:	48 89 c7             	mov    rdi,rax
    12e6:	e8 15 fe ff ff       	call   1100 <fgetc@plt>
    12eb:	89 c3                	mov    ebx,eax
    12ed:	0f be c3             	movsx  eax,bl
    12f0:	89 c7                	mov    edi,eax
    12f2:	e8 c9 fd ff ff       	call   10c0 <putchar@plt>
    12f7:	80 fb ff             	cmp    bl,0xff
    12fa:	75 e3                	jne    12df <main+0xb6>
    12fc:	48 8b 45 e8          	mov    rax,QWORD PTR [rbp-0x18]
    1300:	48 89 c7             	mov    rdi,rax
    1303:	e8 d8 fd ff ff       	call   10e0 <fclose@plt>
    1308:	b8 00 00 00 00       	mov    eax,0x0
    130d:	48 83 c4 28          	add    rsp,0x28
    1311:	5b                   	pop    rbx
    1312:	5d                   	pop    rbp
    1313:	c3                   	ret    
    1314:	66 2e 0f 1f 84 00 00 	nop    WORD PTR cs:[rax+rax*1+0x0]
    131b:	00 00 00 
    131e:	66 90                	xchg   ax,ax

0000000000001320 <__libc_csu_init>:
    1320:	f3 0f 1e fa          	endbr64 
    1324:	41 57                	push   r15
    1326:	4c 8d 3d 53 2a 00 00 	lea    r15,[rip+0x2a53]        # 3d80 <__frame_dummy_init_array_entry>
    132d:	41 56                	push   r14
    132f:	49 89 d6             	mov    r14,rdx
    1332:	41 55                	push   r13
    1334:	49 89 f5             	mov    r13,rsi
    1337:	41 54                	push   r12
    1339:	41 89 fc             	mov    r12d,edi
    133c:	55                   	push   rbp
    133d:	48 8d 2d 44 2a 00 00 	lea    rbp,[rip+0x2a44]        # 3d88 <__do_global_dtors_aux_fini_array_entry>
    1344:	53                   	push   rbx
    1345:	4c 29 fd             	sub    rbp,r15
    1348:	48 83 ec 08          	sub    rsp,0x8
    134c:	e8 af fc ff ff       	call   1000 <_init>
    1351:	48 c1 fd 03          	sar    rbp,0x3
    1355:	74 1f                	je     1376 <__libc_csu_init+0x56>
    1357:	31 db                	xor    ebx,ebx
    1359:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [rax+0x0]
    1360:	4c 89 f2             	mov    rdx,r14
    1363:	4c 89 ee             	mov    rsi,r13
    1366:	44 89 e7             	mov    edi,r12d
    1369:	41 ff 14 df          	call   QWORD PTR [r15+rbx*8]
    136d:	48 83 c3 01          	add    rbx,0x1
    1371:	48 39 dd             	cmp    rbp,rbx
    1374:	75 ea                	jne    1360 <__libc_csu_init+0x40>
    1376:	48 83 c4 08          	add    rsp,0x8
    137a:	5b                   	pop    rbx
    137b:	5d                   	pop    rbp
    137c:	41 5c                	pop    r12
    137e:	41 5d                	pop    r13
    1380:	41 5e                	pop    r14
    1382:	41 5f                	pop    r15
    1384:	c3                   	ret    
    1385:	66 66 2e 0f 1f 84 00 	data16 nop WORD PTR cs:[rax+rax*1+0x0]
    138c:	00 00 00 00 

0000000000001390 <__libc_csu_fini>:
    1390:	f3 0f 1e fa          	endbr64 
    1394:	c3                   	ret    
