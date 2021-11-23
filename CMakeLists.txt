cmake_minimum_required(VERSION 3.20)
project(Project_ACM_final)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project_ACM_final
        code/ACM模板/reconstucted/bignum.cpp
        code/ACM模板/reconstucted/cfmuban.cpp
        code/ACM模板/reconstucted/edge.cpp
        code/ACM模板/reconstucted/euler.cpp
        code/ACM模板/reconstucted/fast_pow.cpp
        code/ACM模板/reconstucted/lca.cpp
        code/ACM模板/reconstucted/LCT.cpp
        code/ACM模板/reconstucted/low_cost_flow.cpp
        code/ACM模板/reconstucted/macix_fast_pow.cpp
        code/ACM模板/reconstucted/max_flow.cpp
        code/ACM模板/reconstucted/modint.cpp
        code/ACM模板/reconstucted/ni_yuan.cpp
        code/ACM模板/reconstucted/SA.cpp
        code/ACM模板/reconstucted/seg_tree_range.cpp
        code/ACM模板/reconstucted/st_table.cpp
        code/ACM模板/reconstucted/treap.cpp
        code/ACM模板/reconstucted/tree_arr_range.cpp
        code/ACM模板/reconstucted/tree_arr_single.cpp
        code/ACM模板/reconstucted/trie.cpp
        code/ACM模板/reconstucted/xyl.cpp
        code/ACM模板/reconstucted/主席数（区间第k大）.cpp
        code/ACM模板/reconstucted/可持久化并查集.cpp
        code/ACM模板/reconstucted/可持久化数组.cpp
        code/ACM模板/二维向量/点、计算几何基础.cpp
        "code/ACM模板/Aho-Corasick 自动机.cpp"
        code/ACM模板/cfmuban.cpp
        code/ACM模板/DFT.cpp
        "code/ACM模板/Gauss 消元求行列式 (模意义).cpp"
        "code/ACM模板/Gauss 消元法.cpp"
        code/ACM模板/gcd.cpp
        "code/ACM模板/IO 优化.cpp"
        "code/ACM模板/KMP 模式匹配.cpp"
        "code/ACM模板/Manacher 回文串.cpp"
        "code/ACM模板/Miller-Rabin 素数测试.cpp"
        "code/ACM模板/Pollard-Rho 素因数分解.cpp"
        "code/ACM模板/ST 表.cpp"
        code/ACM模板/superHELLOWORLD.cpp
        "code/ACM模板/ZKW费用流(SPFA).cpp"
        code/ACM模板/z算法.cpp
        "code/ACM模板/一般图最大匹配 (带花树算法).cpp"
        "code/ACM模板/三维凸包 (卷包裹法).cpp"
        code/ACM模板/三维计算几何基础.cpp
        "code/ACM模板/三角形外心 & 最小圆覆盖.cpp"
        "code/ACM模板/乘模函数 (64 bit 大整数相乘取模).cpp"
        "code/ACM模板/二分图最大匹配 (增广路算法).cpp"
        "code/ACM模板/伸展树 (Splay).cpp"
        code/ACM模板/分解质因数.cpp
        "code/ACM模板/动态树 (Link-Cut Tree).cpp"
        "code/ACM模板/动态规划的转移 .cpp"
        "code/ACM模板/半平面交 (平行处理版).cpp"
        "code/ACM模板/单源最短路 (Dijkstra).cpp"
        code/ACM模板/双向邻接表.cpp
        "code/ACM模板/可持久化线段树 (add 操作).cpp"
        "code/ACM模板/后缀数组 (倍增构造).cpp"
        code/ACM模板/后缀自动机.cpp
        code/ACM模板/回文自动机.cpp
        code/ACM模板/多边形操作.cpp
        code/ACM模板/大小步离散对数.cpp
        code/ACM模板/大数模板（待完成）.cpp
        code/ACM模板/字典树.cpp
        "code/ACM模板/字符串 Hash.cpp"
        "code/ACM模板/带权 edge 结构体.cpp"
        code/ACM模板/平面上的圆几何.cpp
        "code/ACM模板/平面凸包 (Graham Scan).cpp"
        "code/ACM模板/并查集 (不封装，按秩合并) .cpp"
        "code/ACM模板/并查集 (封装).cpp"
        "code/ACM模板/快速 Fourier 变换 (Fast Fourier Transform).cpp"
        code/ACM模板/快速幂.cpp
        code/ACM模板/快速幂非递归.cpp
        "code/ACM模板/所有点对的最短路 (Floyd).cpp"
        "code/ACM模板/扩展 Euclid 算法.cpp"
        code/ACM模板/旋转卡壳求凸集直径.cpp
        "code/ACM模板/无向图的割点 .cpp"
        code/ACM模板/无向图的桥边.cpp
        code/ACM模板/无向图的点双缩点.cpp
        "code/ACM模板/无向图的边双缩点 .cpp"
        "code/ACM模板/最大流 (Dinic).cpp"
        "code/ACM模板/最小生成树 (Kruskal).cpp"
        "code/ACM模板/最小费用最大流 (Dinic).cpp"
        "code/ACM模板/最近公共祖先 (LCA) 的 ST 表算法.cpp"
        "code/ACM模板/最近公共祖先 (LCA) 的倍增算法.cpp"
        code/ACM模板/有向图的强连通分量.cpp
        code/ACM模板/有向无环图的拓扑排序.cpp
        "code/ACM模板/杜教筛 (杜氏求和法).cpp"
        "code/ACM模板/树分治 (静态点分治).cpp"
        "code/ACM模板/树堆 (Treap).cpp"
        "code/ACM模板/树状数组 (不封装).cpp"
        "code/ACM模板/树状数组 (封装).cpp"
        code/ACM模板/树状数组.cpp
        code/ACM模板/根据后缀自动机构造后缀树和后缀数组.cpp
        code/ACM模板/深度优先搜索.cpp
        code/ACM模板/直线及其函数.cpp
        code/ACM模板/离散化.cpp
        code/ACM模板/线性推逆元.cpp
        "code/ACM模板/线性筛 Euler φ 函数.cpp"
        "code/ACM模板/线性筛 Möbius μ 函数.cpp"
        "code/ACM模板/线性筛素数 (筛最小素因子).cpp"
        code/ACM模板/线性规划.cpp
        "code/ACM模板/线段树 (不封装).cpp"
        "code/ACM模板/线段树 (封装).cpp"
        code/ACM模板/线段树重构（带lazy）.cpp
        "code/ACM模板/网络流 edge 结构体.cpp"
        "code/ACM模板/自适应 Simpson 积分.cpp"
        "code/ACM模板/虚树 (深度栈算法).cpp"
        code/ACM模板/轻重链剖分.cpp
        "code/ACM模板/长链剖分 (Long-Short Decomposition).cpp"
        code/Codeforces/148D.cpp
        code/Codeforces/1521C.cpp
        code/competition/10.13_luogu/3.cpp
        code/competition/10.16_hdu/1.cpp
        code/competition/10.16_hdu/2.cpp
        code/competition/10.16_hdu/3.cpp
        code/competition/10.16_hdu/4.cpp
        code/competition/10.16_hdu/6.cpp
        code/competition/10.16_hdu/7.cpp
        code/competition/10.16_hdu/tempCodeRunnerFile.cpp
        code/competition/10.1_dashi/1.cpp
        code/competition/10.1_dashi/2.cpp
        code/competition/10.1_dashi/3.cpp
        code/competition/10.1_dashi/4.cpp
        code/competition/10.1_dashi/41.cpp
        code/competition/10.1_dashi/5.cpp
        code/competition/10.1_dashi/tempCodeRunnerFile.cpp
        code/competition/10.24_cf/1.cpp
        code/competition/10.24_cf/2.cpp
        code/competition/10.24_cf/3.cpp
        code/competition/10.24_cf/4.cpp
        code/competition/10.30_hdu/1.cpp
        code/competition/10.30_hdu/2.cpp
        code/competition/10.30_hdu/22.cpp
        code/competition/10.30_hdu/3.cpp
        code/competition/10.30_hdu/4.cpp
        code/competition/10.30_hdu/5.cpp
        code/competition/10.30_hdu/6.cpp
        code/competition/10.30_hdu/66.cpp
        code/competition/10.30_hdu/7.cpp
        code/competition/10.30_hdu/tempCodeRunnerFile.cpp
        code/competition/10.8_cf/A.cpp
        code/competition/11.16_cf/1.cpp
        code/competition/11.16_cf/2.cpp
        code/competition/11.16_cf/3.cpp
        code/competition/11.16_cf/4.cpp
        code/competition/11.16_cf/5.cpp
        code/competition/11.19_cf/1.cpp
        code/competition/11.19_cf/2.cpp
        code/competition/11.19_cf/3.cpp
        code/competition/11.19_cf/tempCodeRunnerFile.cpp
        code/competition/11.27_cf/1.cpp
        code/competition/11.27_cf/2.cpp
        code/competition/11.27_cf/3.cpp
        code/competition/11.29_cf/1.cpp
        code/competition/11.29_cf/2.cpp
        code/competition/11.29_cf/3.cpp
        code/competition/11.29_cf/3t.cpp
        code/competition/11.29_cf/4.cpp
        code/competition/11.29_cf/5.cpp
        code/competition/11_12_vp/1.cpp
        code/competition/11_12_vp/D.cpp
        code/competition/11_12_vp/L.cpp
        code/competition/11_13_vp/1.cpp
        code/competition/11_13_vp/2.cpp
        code/competition/11_13_vp/3.cpp
        code/competition/11_21_shenyang/H.cpp
        code/competition/11_21_shenyang/L.cpp
        code/competition/11_21_shenyang/tt.cpp
        code/competition/12.12_cf/1.cpp
        code/competition/12.12_cf/2.cpp
        code/competition/12.12_cf/3.cpp
        code/competition/12.12_cf/4.cpp
        code/competition/12.12_cf/5.cpp
        code/competition/12.14_cf/1.cpp
        code/competition/12.14_cf/2.cpp
        code/competition/12.15_cf1/1.cpp
        code/competition/12.15_cf1/2.cpp
        code/competition/12.15_cf1/3.cpp
        code/competition/12.15_cf1/3t.cpp
        code/competition/12.15_cf1/4.cpp
        code/competition/12.15_cf2/1.cpp
        code/competition/12.15_cf2/2.cpp
        code/competition/12.15_cf2/3.cpp
        code/competition/12.15_cf2/4.cpp
        code/competition/12.15_cf2/4t.cpp
        code/competition/12.15_cf2/4t2.cpp
        code/competition/12.15_cf2/4t3.cpp
        code/competition/12.15_cf2/4t4.cpp
        code/competition/12.15_cf2/5.cpp
        code/competition/12.15_cf2/tempCodeRunnerFile.cpp
        code/competition/12.17_cf/1.cpp
        code/competition/12.17_cf/2.cpp
        code/competition/12.17_cf/3.cpp
        code/competition/12.17_cf/4.cpp
        code/competition/12.17_cf/5.cpp
        code/competition/12.17_cf/6.cpp
        code/competition/12.17_cf/7.cpp
        code/competition/12.20_cf/3.cpp
        code/competition/12.20_cf/3t.cpp
        code/competition/12.20_cf/4.cpp
        code/competition/12.20_cf/4t.cpp
        code/competition/12.24_cf/1.cpp
        code/competition/12.24_cf/2.cpp
        code/competition/12.24_cf/2ans.cpp
        code/competition/12.24_cf/2t.cpp
        code/competition/12.24_cf/3.cpp
        code/competition/12.24_cf/4.cpp
        code/competition/12.24_cf/tempCodeRunnerFile.cpp
        code/competition/12.27_cf/1.cpp
        code/competition/12.27_cf/2.cpp
        code/competition/12.27_cf/3.cpp
        code/competition/12.27_cf/4.cpp
        code/competition/12.27_cf/5.cpp
        code/competition/12.29_cf/1.cpp
        code/competition/12.29_cf/2.cpp
        code/competition/12.29_cf/4.cpp
        code/competition/12.5_cf/1.cpp
        code/competition/12.5_cf/2.cpp
        code/competition/12.5_cf/3.cpp
        code/competition/12.5_cf/4.cpp
        code/competition/12.5_cf/tempCodeRunnerFile.cpp
        code/competition/12_21.cf/1.cpp
        code/competition/12_21.cf/2.cpp
        code/competition/12_21.cf/3.cpp
        code/competition/12_21.cf/4.cpp
        code/competition/12_21.cf/4t.cpp
        code/competition/12_21.cf/5.cpp
        code/competition/12_21.cf/tempCodeRunnerFile.cpp
        code/competition/2/1.cpp
        code/competition/2/2.cpp
        code/competition/2/3.cpp
        code/competition/2/4.cpp
        code/competition/2/tempCodeRunnerFile.cpp
        code/competition/20.24/1.cpp
        code/competition/20.24/2.cpp
        code/competition/20.24/3.cpp
        code/competition/20.24/5.cpp
        code/competition/20.24/t.cpp
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/1.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/2.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/C.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/D.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/E.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/G.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/I.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/L.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/M.cpp"
        "code/competition/2020 ICPC Gran Premio de Mexico 3ra Fecha/M2.cpp"
        "code/competition/2020 ICPC, COMPFEST 12, Indonesia Multi-Provincial Contest (Unrated, Online Mirror, ICPC Rules, Teams Preferred)/1.cpp"
        "code/competition/2020 ICPC, COMPFEST 12, Indonesia Multi-Provincial Contest (Unrated, Online Mirror, ICPC Rules, Teams Preferred)/2.cpp"
        "code/competition/2020 ICPC, COMPFEST 12, Indonesia Multi-Provincial Contest (Unrated, Online Mirror, ICPC Rules, Teams Preferred)/G.cpp"
        "code/competition/2020 Multi-University Training Contest 1/1.cpp"
        "code/competition/2020 Multi-University Training Contest 1/2.cpp"
        "code/competition/2020 Multi-University Training Contest 1/3.cpp"
        "code/competition/2020 Multi-University Training Contest 1/4.cpp"
        "code/competition/2020 Multi-University Training Contest 1/4ans.cpp"
        "code/competition/2020 Multi-University Training Contest 2/1.cpp"
        "code/competition/2020 Multi-University Training Contest 2/1ans.cpp"
        "code/competition/2020 Multi-University Training Contest 2/2.cpp"
        "code/competition/2020 Multi-University Training Contest 2/3.cpp"
        "code/competition/2020 Multi-University Training Contest 2/4.cpp"
        "code/competition/2020 Multi-University Training Contest 2/5.cpp"
        "code/competition/2020 Multi-University Training Contest 3/1.cpp"
        "code/competition/2020 Multi-University Training Contest 3/2.cpp"
        "code/competition/2020 Multi-University Training Contest 3/3.cpp"
        "code/competition/2020 Multi-University Training Contest 3/4.cpp"
        "code/competition/2020 Multi-University Training Contest 3/5.cpp"
        "code/competition/2020 Multi-University Training Contest 3/6.cpp"
        "code/competition/2020 Multi-University Training Contest 3/7.cpp"
        "code/competition/2020 Multi-University Training Contest 4/1.cpp"
        "code/competition/2020 Multi-University Training Contest 4/2.cpp"
        "code/competition/2020 Multi-University Training Contest 4/3.cpp"
        "code/competition/2020 Multi-University Training Contest 4/4.cpp"
        "code/competition/2020 Multi-University Training Contest 4/5.cpp"
        "code/competition/2020 Multi-University Training Contest 4/6.cpp"
        "code/competition/2020 Multi-University Training Contest 4/7.cpp"
        "code/competition/2020 Multi-University Training Contest 4/8.cpp"
        "code/competition/2020 Multi-University Training Contest 6/1.cpp"
        "code/competition/2020 Multi-University Training Contest 6/2.cpp"
        "code/competition/2020 Multi-University Training Contest 6/3.cpp"
        "code/competition/2020 Multi-University Training Contest 6/4.cpp"
        "code/competition/2020 Multi-University Training Contest 6/5.cpp"
        "code/competition/2020 Multi-University Training Contest 6/6.cpp"
        "code/competition/2020 Multi-University Training Contest 6/7.cpp"
        "code/competition/2020 Multi-University Training Contest 6/8.cpp"
        "code/competition/2020 Multi-University Training Contest 9/1.cpp"
        "code/competition/2020 Multi-University Training Contest 9/2.cpp"
        "code/competition/2020 Multi-University Training Contest 9/3.cpp"
        "code/competition/2020 Multi-University Training Contest 9/4.cpp"
        "code/competition/2020 Multi-University Training Contest 9/5.cpp"
        "code/competition/2020 Multi-University Training Contest 9/6.cpp"
        "code/competition/2020 计蒜之道 线上决赛/1.cpp"
        "code/competition/2020 计蒜之道 线上决赛/2.cpp"
        "code/competition/2020 计蒜之道 线上决赛/3.cpp"
        "code/competition/2020 计蒜之道 线上决赛/4.cpp"
        "code/competition/2020 计蒜之道 线上决赛/5.cpp"
        "code/competition/2020-2021 ACM-ICPC Latin American Regional Programming Contest/H.cpp"
        "code/competition/2020-2021 ACM-ICPC Latin American Regional Programming Contest/K.cpp"
        "code/competition/2020-2021 ACM-ICPC Latin American Regional Programming Contest/L.cpp"
        "code/competition/2020-2021 ACM-ICPC Latin American Regional Programming Contest/N.cpp"
        code/competition/2020_du/1.cpp
        code/competition/2020_du/1012.cpp
        code/competition/2020_mti/1.cpp
        code/competition/2020_mti/2.cpp
        code/competition/2020_mti/3.cpp
        code/competition/2020_mti/4.cpp
        code/competition/2020_mutiuinviersi/1.cpp
        code/competition/2020_mutiuinviersi/2.cpp
        code/competition/2020_mutiuinviersi/3.cpp
        code/competition/2020CCPC_QHD/1.cpp
        code/competition/2020CCPC_QHD/2.cpp
        code/competition/2020CCPC_QHD/3.cpp
        code/competition/2020CCPC_QHD/4.cpp
        code/competition/2020umm/1.cpp
        code/competition/2020umm/2.cpp
        code/competition/2020umm/3.cpp
        code/competition/2020umm/4.cpp
        code/competition/2020牛客国庆集训派对day2/1.cpp
        code/competition/2020牛客国庆集训派对day2/2.cpp
        code/competition/2020牛客国庆集训派对day2/3.cpp
        code/competition/2020牛客国庆集训派对day2/4.cpp
        code/competition/2020牛客国庆集训派对day2/5.cpp
        code/competition/2020牛客国庆集训派对day2/6.cpp
        code/competition/2020牛客国庆集训派对day2/7.cpp
        code/competition/2020牛客国庆集训派对day7/1.cpp
        code/competition/2020牛客国庆集训派对day7/2.cpp
        code/competition/2020牛客国庆集训派对day7/3.cpp
        code/competition/2020牛客国庆集训派对day7/4.cpp
        code/competition/2020牛客国庆集训派对day7/5.cpp
        "code/competition/2021 Shandong Provincial Collegiate Programming Contest/1.cpp"
        "code/competition/2021 Shandong Provincial Collegiate Programming Contest/2.cpp"
        "code/competition/2021 Shandong Provincial Collegiate Programming Contest/3.cpp"
        "code/competition/2021 Shandong Provincial Collegiate Programming Contest/4.cpp"
        "code/competition/2021 Shandong Provincial Collegiate Programming Contest/5.cpp"
        "code/competition/2021 Shandong Provincial Collegiate Programming Contest/6.cpp"
        code/competition/2021牛客寒假算法基础集训营1/1.cpp
        code/competition/2021牛客寒假算法基础集训营1/2.cpp
        code/competition/2021牛客寒假算法基础集训营1/C.cpp
        code/competition/2021牛客寒假算法基础集训营1/F.cpp
        code/competition/2021牛客寒假算法基础集训营1/I.cpp
        code/competition/2021牛客寒假算法基础集训营1/J.cpp
        code/competition/2021牛客寒假算法基础集训营2/D.cpp
        code/competition/2021牛客寒假算法基础集训营2/E.cpp
        code/competition/2021牛客寒假算法基础集训营2/G.cpp
        code/competition/2021牛客寒假算法基础集训营2/I.cpp
        code/competition/2021牛客寒假算法基础集训营2/J.cpp
        code/competition/2021牛客寒假算法基础集训营3/1.cpp
        code/competition/2021牛客寒假算法基础集训营3/2.cpp
        code/competition/2021牛客寒假算法基础集训营3/3.cpp
        code/competition/2021牛客寒假算法基础集训营3/4.cpp
        code/competition/2021牛客寒假算法基础集训营3/5.cpp
        code/competition/2021牛客寒假算法基础集训营5/1.cpp
        code/competition/2021牛客寒假算法基础集训营5/2.cpp
        code/competition/2021牛客寒假算法基础集训营6/1.cpp
        code/competition/2021牛客寒假算法基础集训营6/2.cpp
        code/competition/2021牛客寒假算法基础集训营6/3.cpp
        code/competition/2021牛客寒假算法基础集训营6/4.cpp
        code/competition/2021牛客寒假算法基础集训营6/5.cpp
        code/competition/2021牛客寒假算法基础集训营6/6.cpp
        code/competition/2021牛客寒假算法基础集训营6/7.cpp
        code/competition/3_25_ACMlessons/1.cpp
        code/competition/3_25_ACMlessons/2.cpp
        code/competition/3_25_ACMlessons/3.cpp
        code/competition/3_25_ACMlessons/4.cpp
        code/competition/3_25_ACMlessons/5.cpp
        code/competition/3_25_ACMlessons/6.cpp
        code/competition/4_18shanghai/1.cpp
        code/competition/4_18shanghai/2.cpp
        code/competition/4_18shanghai/3.cpp
        code/competition/4_18shanghai/4.cpp
        code/competition/4_18shanghai/5.cpp
        code/competition/4_18shanghai/6.cpp
        code/competition/4_18shanghai/tempCodeRunnerFile.cpp
        code/competition/4_5XueJun/1.cpp
        code/competition/4_5XueJun/2.cpp
        code/competition/4_5XueJun/3.cpp
        code/competition/4_5XueJun/4.cpp
        code/competition/4_5XueJun/5.cpp
        code/competition/4_5XueJun/6.cpp
        code/competition/9.14_nowcoder/02.cpp
        code/competition/9.14_nowcoder/glahad.cpp
        code/competition/9.14_nowcoder/数数.cpp
        code/competition/9.15_cf/1.cpp
        code/competition/9.19_cf/1.cpp
        code/competition/9.19_cf/2.cpp
        code/competition/9.19_cf/2t.cpp
        code/competition/9.19_cf/3.cpp
        code/competition/9.19_cf/t.cpp
        code/competition/9.21_cometoj/A.cpp
        code/competition/9.21_cometoj/At.cpp
        code/competition/9.23_cf/A.cpp
        code/competition/9.23_cf/B.cpp
        code/competition/9.27_cometoj/A.cpp
        code/competition/9.27_cometoj/B.cpp
        code/competition/9.27_cometoj/C.cpp
        code/competition/9.28_cometoj/A.cpp
        code/competition/9.29_cf/A.cpp
        code/competition/9.29_cf/B.cpp
        code/competition/9.29_cf/tempCodeRunnerFile.cpp
        code/competition/ACM_lesson_17/1.cpp
        code/competition/ACM_lesson_17/2.cpp
        code/competition/ACM_lesson_17/3.cpp
        code/competition/ACM_lesson_17/4.cpp
        code/competition/ACM_lesson_17/5.cpp
        code/competition/ACM_qimo/1.cpp
        code/competition/ACM_qimo/2.cpp
        code/competition/ACM_qimo/3.cpp
        code/competition/ACM_qimo/4.cpp
        code/competition/ACM_qimo/4t.cpp
        code/competition/ACM_qimo/5.cpp
        code/competition/ACMendterm/1.cpp
        code/competition/ACMendterm/2.cpp
        code/competition/ACMendterm/3.cpp
        code/competition/ACMendterm/4.cpp
        code/competition/ACMendterm/5.cpp
        code/competition/ACMendterm/6.cpp
        code/competition/acmkese_10_29/1.cpp
        code/competition/acmkese_10_29/2.cpp
        code/competition/acmkese_10_29/3.cpp
        code/competition/acmkese_10_29/4.cpp
        code/competition/acmkese_10_29/F.cpp
        code/competition/acmkese_10_29/G.cpp
        code/competition/acmkese_10_29/H.cpp
        code/competition/acmkese_10_29/I.cpp
        code/competition/acmkese_10_29/J.cpp
        code/competition/acmkese_10_29/K.cpp
        code/competition/acmkese_10_29/M.cpp
        "code/competition/AGM 2021, Qualification Round/2.cpp"
        "code/competition/AGM 2021, Qualification Round/3.cpp"
        "code/competition/AGM 2021, Qualification Round/I.cpp"
        "code/competition/Amazalgo Uni 2019 Practice Contest/1.cpp"
        "code/competition/Amazalgo Uni 2019 Practice Contest/2.cpp"
        "code/competition/Amazalgo Uni 2019 Practice Contest/3.cpp"
        "code/competition/Amazalgo Uni 2019 Practice Contest/4.cpp"
        "code/competition/Amazalgo Uni 2019 Practice Contest/5.cpp"
        "code/competition/Asu Coding Cup 4/1.cpp"
        "code/competition/Asu Coding Cup 4/2.cpp"
        "code/competition/Asu Coding Cup 4/3.cpp"
        "code/competition/Asu Coding Cup 4/4.cpp"
        "code/competition/Asu Coding Cup 4/5.cpp"
        code/competition/baidu/1.cpp
        code/competition/baidu/2.cpp
        code/competition/baiduzhixin/1.cpp
        code/competition/baiduzhixin/2.cpp
        code/competition/baiduzhixin/3.cpp
        code/competition/baiduzhixin/4.cpp
        code/competition/baiduzhixin/5.cpp
        code/competition/baiduzhixin/6.cpp
        code/competition/best_coder_1/1.cpp
        code/competition/best_coder_1/2.cpp
        code/competition/best_coder_1/3.cpp
        code/competition/best_coder_1/4.cpp
        code/competition/bye_2020/5.cpp
        code/competition/ccpc_10_10/1.cpp
        code/competition/ccpc_10_10/2.cpp
        code/competition/ccpc_10_10/3.cpp
        code/competition/ccpc_10_10/4.cpp
        code/competition/ccpc_10_10/5.cpp
        code/competition/ccpc_10_10/6.cpp
        code/competition/ccpc_10_10/7.cpp
        code/competition/CCPC_nv/A.cpp
        code/competition/CCPC_nv/J.cpp
        code/competition/CCPC_pre/1.cpp
        code/competition/CCPC_pre/2.cpp
        code/competition/CCPC_pre/3.cpp
        code/competition/CCPC_pre/4.cpp
        code/competition/CCPC_pre/5.cpp
        code/competition/CCPC_pre/6.cpp
        code/competition/ccpc_test/1.cpp
        code/competition/ccpc_test/2.cpp
        code/competition/ccpc_test/3.cpp
        code/competition/ccpc_test/4.cpp
        code/competition/ceshi10_8/1.cpp
        code/competition/ceshi10_8/2.cpp
        code/competition/ceshi10_8/3.cpp
        code/competition/ceshi10_8/4.cpp
        code/competition/cf/1.cpp
        code/competition/cf/127_A.cpp
        code/competition/cf/127_B.cpp
        code/competition/cf/2.cpp
        code/competition/cf/3.cpp
        code/competition/cf/tempCodeRunnerFile.cpp
        "code/competition/cf _rd618/1.cpp"
        "code/competition/cf _rd618/2.cpp"
        "code/competition/cf _rd618/3.cpp"
        "code/competition/cf _rd618/4.cpp"
        "code/competition/cf _rd618/tempCodeRunnerFile.cpp"
        code/competition/cf2/1.cpp
        code/competition/cf2/2.cpp
        code/competition/cf2/3.cpp
        code/competition/cf2/4.cpp
        code/competition/cf_rd595/1.cpp
        code/competition/cf_rd595/2.cpp
        code/competition/cf_rd595/3.cpp
        code/competition/cf_rd596/1.cpp
        code/competition/cf_rd596/2.cpp
        code/competition/cf_rd596/3.cpp
        code/competition/cf_rd596/4.cpp
        code/competition/cf_rd596/5.cpp
        code/competition/cf_rd596/6.cpp
        code/competition/cf_rd596/tempCodeRunnerFile.cpp
        code/competition/cf_rd599/1.cpp
        code/competition/cf_rd599/2.cpp
        code/competition/cf_rd599/3.cpp
        code/competition/cf_rd599/4.cpp
        code/competition/cf_rd599/5.cpp
        code/competition/cf_rd616/1.cpp
        code/competition/cf_rd616/2.cpp
        code/competition/cf_rd616/3.cpp
        code/competition/cf_rd616/4.cpp
        code/competition/cf_rd616/5.cpp
        code/competition/cf_rd617/1.cpp
        code/competition/cf_rd617/2.cpp
        code/competition/cf_rd617/3.cpp
        code/competition/cf_rd617/4.cpp
        code/competition/cf_rd617/6.cpp
        code/competition/cf_rd619/1.cpp
        code/competition/cf_rd619/2.cpp
        code/competition/cf_rd619/3.cpp
        code/competition/cf_rd619/4.cpp
        code/competition/cf_rd619/4ans.cpp
        code/competition/cf_rd619/5.cpp
        code/competition/cf_rd619/6.cpp
        code/competition/cf_rd620/1.cpp
        code/competition/cf_rd620/2.cpp
        code/competition/cf_rd620/3.cpp
        code/competition/cf_rd620/4.cpp
        code/competition/cf_rd620/5.cpp
        code/competition/cf_rd621/1.cpp
        code/competition/cf_rd621/2.cpp
        code/competition/cf_rd621/3.cpp
        code/competition/cf_rd621/4.cpp
        code/competition/cf_rd621/5.cpp
        code/competition/cf_rd622/1.cpp
        code/competition/cf_rd622/2.cpp
        code/competition/cf_rd622/3.cpp
        code/competition/cf_rd622/4.cpp
        code/competition/cf_rd622/5.cpp
        code/competition/cf_rd623/1.cpp
        code/competition/cf_rd623/2.cpp
        code/competition/cf_rd623/3.cpp
        code/competition/cf_rd623/4.cpp
        code/competition/cf_rd624/1.cpp
        code/competition/cf_rd624/2.cpp
        code/competition/cf_rd624/3.cpp
        code/competition/cf_rd624/4.cpp
        code/competition/cf_rd624/5.cpp
        code/competition/cf_rd624/tempCodeRunnerFile.cpp
        code/competition/cf_rd_626/1.cpp
        code/competition/cf_rd_626/2.cpp
        code/competition/cf_rd_626/3.cpp
        code/competition/cf_rd_626/4.cpp
        code/competition/cf_rd_626/tempCodeRunnerFile.cpp
        code/competition/cf_rf_625/1.cpp
        code/competition/cf_rf_625/2.cpp
        code/competition/cf_rf_625/3.cpp
        code/competition/cf_rf_625/4.cpp
        code/competition/cf_rf_625/5.cpp
        code/competition/cf_rf_625/6.cpp
        code/competition/cf_round593/2.cpp
        code/competition/cf_round612/1.cpp
        code/competition/cf_round612/2.cpp
        code/competition/cf_round612/3.cpp
        code/competition/cf_round613/1.cpp
        code/competition/cf_round613/2.cpp
        code/competition/cf_round613/3.cpp
        code/competition/cf_round613/4.cpp
        code/competition/cf_round613/tempCodeRunnerFile.cpp
        code/competition/cf_round614/1.cpp
        code/competition/cf_round614/1t.cpp
        code/competition/cf_round614/2.cpp
        code/competition/cf_round614/3.cpp
        code/competition/cf_round614/3ans.cpp
        code/competition/cf_round614/3t.cpp
        code/competition/cf_round614/3tt.cpp
        code/competition/cf_round614/4.cpp
        code/competition/cf_round615/1.cpp
        code/competition/cf_round615/2.cpp
        code/competition/cf_round615/3.cpp
        code/competition/cf_round615/4.cpp
        code/competition/cf_round615/tempCodeRunnerFile.cpp
        code/competition/China_oil/1.cpp
        code/competition/China_oil/2.cpp
        code/competition/China_oil/4.cpp
        code/competition/China_oil/5.cpp
        code/competition/China_oil/6.cpp
        code/competition/chongxian7_18/1.cpp
        code/competition/chongxian7_18/10.cpp
        code/competition/chongxian7_18/2.cpp
        code/competition/chongxian7_18/3.cpp
        code/competition/chongxian7_18/4.cpp
        code/competition/chongxian7_18/5.cpp
        code/competition/chongxian7_18/6.cpp
        code/competition/chongxian7_18/7.cpp
        code/competition/chongxian7_18/8.cpp
        code/competition/chongxian7_18/9.cpp
        "code/competition/CodeCraft-20 (Div. 2)/1.cpp"
        "code/competition/CodeCraft-20 (Div. 2)/2.cpp"
        "code/competition/CodeCraft-20 (Div. 2)/3.cpp"
        "code/competition/CodeCraft-20 (Div. 2)/4.cpp"
        "code/competition/CodeCraft-20 (Div. 2)/5.cpp"
        "code/competition/CodeCraft-20 (Div. 2)/6.cpp"
        code/competition/codeforce_740/1.cpp
        code/competition/codeforce_740/2.cpp
        code/competition/codeforce_740/3.cpp
        code/competition/codeforce_740/4.cpp
        "code/competition/Codeforces Global Round 10/1.cpp"
        "code/competition/Codeforces Global Round 10/2.cpp"
        "code/competition/Codeforces Global Round 10/3.cpp"
        "code/competition/Codeforces Global Round 10/4.cpp"
        "code/competition/Codeforces Global Round 10/5.cpp"
        "code/competition/Codeforces Global Round 10/6.cpp"
        "code/competition/Codeforces Global Round 10/7.cpp"
        "code/competition/Codeforces Global Round 11/1.cpp"
        "code/competition/Codeforces Global Round 11/2.cpp"
        "code/competition/Codeforces Global Round 11/3.cpp"
        "code/competition/Codeforces Global Round 11/4.cpp"
        "code/competition/Codeforces Global Round 11/5.cpp"
        "code/competition/Codeforces Global Round 12/1.cpp"
        "code/competition/Codeforces Global Round 12/2.cpp"
        "code/competition/Codeforces Global Round 12/3.cpp"
        "code/competition/Codeforces Global Round 12/4.cpp"
        "code/competition/Codeforces Global Round 13/1.cpp"
        "code/competition/Codeforces Global Round 13/2.cpp"
        "code/competition/Codeforces Global Round 13/3.cpp"
        "code/competition/Codeforces Global Round 13/4.cpp"
        "code/competition/Codeforces Global Round 13/5.cpp"
        "code/competition/Codeforces Global Round 13/6.cpp"
        "code/competition/Codeforces Global Round 13/7.cpp"
        "code/competition/Codeforces Global Round 14/1.cpp"
        "code/competition/Codeforces Global Round 14/2.cpp"
        "code/competition/Codeforces Global Round 14/3.cpp"
        "code/competition/Codeforces Global Round 14/4.cpp"
        "code/competition/Codeforces Global Round 14/5.cpp"
        "code/competition/Codeforces Global Round 14/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Global Round 16/1.cpp"
        "code/competition/Codeforces Global Round 16/2.cpp"
        "code/competition/Codeforces Global Round 16/3.cpp"
        "code/competition/Codeforces Global Round 16/4.cpp"
        "code/competition/Codeforces Global Round 16/5.cpp"
        "code/competition/Codeforces Global Round 16/6.cpp"
        "code/competition/Codeforces Global Round 7/1.cpp"
        "code/competition/Codeforces Global Round 7/2.cpp"
        "code/competition/Codeforces Global Round 7/3.cpp"
        "code/competition/Codeforces Global Round 7/4.cpp"
        "code/competition/Codeforces Global Round 7/5.cpp"
        "code/competition/Codeforces Global Round 7/6.cpp"
        "code/competition/Codeforces Global Round 7/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Global Round 8/1.cpp"
        "code/competition/Codeforces Global Round 8/2.cpp"
        "code/competition/Codeforces Global Round 8/2t.cpp"
        "code/competition/Codeforces Global Round 8/3.cpp"
        "code/competition/Codeforces Global Round 8/4.cpp"
        "code/competition/Codeforces Global Round 8/5.cpp"
        "code/competition/Codeforces Global Round 8/6.cpp"
        "code/competition/Codeforces Global Round 8/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Global Round 9/1.cpp"
        "code/competition/Codeforces Global Round 9/2.cpp"
        "code/competition/Codeforces Global Round 9/3.cpp"
        "code/competition/Codeforces Global Round 9/4.cpp"
        "code/competition/Codeforces LATOKEN Round 1/1.cpp"
        "code/competition/Codeforces LATOKEN Round 1/2.cpp"
        "code/competition/Codeforces LATOKEN Round 1/3.cpp"
        "code/competition/Codeforces LATOKEN Round 1/4.cpp"
        "code/competition/Codeforces LATOKEN Round 1/5.cpp"
        "code/competition/Codeforces LATOKEN Round 1/5ans.cpp"
        "code/competition/Codeforces Raif Round 1/1.cpp"
        "code/competition/Codeforces Raif Round 1/2.cpp"
        "code/competition/Codeforces Raif Round 1/3.cpp"
        "code/competition/Codeforces Raif Round 1/4.cpp"
        "code/competition/Codeforces Raif Round 1/5.cpp"
        "code/competition/Codeforces Raif Round 1/6.cpp"
        "code/competition/Codeforces Round #471/1.cpp"
        "code/competition/Codeforces Round #471/2.cpp"
        "code/competition/Codeforces Round #471/3.cpp"
        "code/competition/Codeforces Round #495/1.cpp"
        "code/competition/Codeforces Round #495/2.cpp"
        "code/competition/Codeforces Round #495/3.cpp"
        "code/competition/Codeforces Round #495/4.cpp"
        "code/competition/Codeforces Round #495/5.cpp"
        "code/competition/Codeforces Round #499/1.cpp"
        "code/competition/Codeforces Round #499/2.cpp"
        "code/competition/Codeforces Round #511/1.cpp"
        "code/competition/Codeforces Round #511/2.cpp"
        "code/competition/Codeforces Round #511/3.cpp"
        "code/competition/Codeforces Round #511/3t.cpp"
        "code/competition/Codeforces Round #511/4.cpp"
        "code/competition/Codeforces Round #511/5.cpp"
        "code/competition/Codeforces Round #537/1.cpp"
        "code/competition/Codeforces Round #537/2.cpp"
        "code/competition/Codeforces Round #537/3.cpp"
        "code/competition/Codeforces Round #537/4.cpp"
        "code/competition/Codeforces Round #537/5.cpp"
        "code/competition/Codeforces Round #558/1.cpp"
        "code/competition/Codeforces Round #558/2.cpp"
        "code/competition/Codeforces Round #558/3.cpp"
        "code/competition/Codeforces Round #558/4.cpp"
        "code/competition/Codeforces Round #562/1.cpp"
        "code/competition/Codeforces Round #562/2.cpp"
        "code/competition/Codeforces Round #562/3.cpp"
        "code/competition/Codeforces Round #562/4.cpp"
        "code/competition/Codeforces Round #565/1.cpp"
        "code/competition/Codeforces Round #565/2.cpp"
        "code/competition/Codeforces Round #565/3.cpp"
        "code/competition/Codeforces Round #565/4.cpp"
        "code/competition/Codeforces Round #567/1.cpp"
        "code/competition/Codeforces Round #567/2.cpp"
        "code/competition/Codeforces Round #567/3.cpp"
        "code/competition/Codeforces Round #567/4.cpp"
        "code/competition/Codeforces Round #567/5.cpp"
        "code/competition/Codeforces Round #568/1.cpp"
        "code/competition/Codeforces Round #568/2.cpp"
        "code/competition/Codeforces Round #568/3.cpp"
        "code/competition/Codeforces Round #568/4.cpp"
        "code/competition/Codeforces Round #568/5.cpp"
        "code/competition/Codeforces Round #572/1.cpp"
        "code/competition/Codeforces Round #572/2.cpp"
        "code/competition/Codeforces Round #572/3.cpp"
        "code/competition/Codeforces Round #572/4.cpp"
        "code/competition/Codeforces Round #572/5.cpp"
        "code/competition/Codeforces Round #578/1.cpp"
        "code/competition/Codeforces Round #578/2.cpp"
        "code/competition/Codeforces Round #578/3.cpp"
        "code/competition/Codeforces Round #578/4.cpp"
        "code/competition/Codeforces Round #580/1.cpp"
        "code/competition/Codeforces Round #580/3.cpp"
        "code/competition/Codeforces Round #581/1.cpp"
        "code/competition/Codeforces Round #581/2.cpp"
        "code/competition/Codeforces Round #581/3.cpp"
        "code/competition/Codeforces Round #581/4.cpp"
        "code/competition/Codeforces Round #585/1.cpp"
        "code/competition/Codeforces Round #585/2.cpp"
        "code/competition/Codeforces Round #585/3.cpp"
        "code/competition/Codeforces Round #585/4.cpp"
        "code/competition/Codeforces Round #585/5.cpp"
        "code/competition/Codeforces Round #591/1.cpp"
        "code/competition/Codeforces Round #591/2.cpp"
        "code/competition/Codeforces Round #591/3.cpp"
        "code/competition/Codeforces Round #591/4.cpp"
        "code/competition/Codeforces Round #591/5.cpp"
        "code/competition/Codeforces Round #591/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #592 (Div. 2)/1.cpp"
        "code/competition/Codeforces Round #592 (Div. 2)/2.cpp"
        "code/competition/Codeforces Round #592 (Div. 2)/3.cpp"
        "code/competition/Codeforces Round #592 (Div. 2)/4.cpp"
        "code/competition/Codeforces Round #592 (Div. 2)/5.cpp"
        "code/competition/Codeforces Round #592 (Div. 2)/6.cpp"
        "code/competition/Codeforces Round #597/1.cpp"
        "code/competition/Codeforces Round #597/2.cpp"
        "code/competition/Codeforces Round #597/3.cpp"
        "code/competition/Codeforces Round #597/4.cpp"
        "code/competition/Codeforces Round #598/1.cpp"
        "code/competition/Codeforces Round #598/2.cpp"
        "code/competition/Codeforces Round #598/2t.cpp"
        "code/competition/Codeforces Round #598/3.cpp"
        "code/competition/Codeforces Round #598/3ans.cpp"
        "code/competition/Codeforces Round #598/5.cpp"
        "code/competition/Codeforces Round #598/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #605/5.cpp"
        "code/competition/Codeforces Round #627 (Div. 3)/1.cpp"
        "code/competition/Codeforces Round #627 (Div. 3)/2.cpp"
        "code/competition/Codeforces Round #627 (Div. 3)/3.cpp"
        "code/competition/Codeforces Round #627 (Div. 3)/4.cpp"
        "code/competition/Codeforces Round #627 (Div. 3)/5.cpp"
        "code/competition/Codeforces Round #627 (Div. 3)/6.cpp"
        "code/competition/Codeforces Round #628 (Div. 2)/1.cpp"
        "code/competition/Codeforces Round #628 (Div. 2)/2.cpp"
        "code/competition/Codeforces Round #628 (Div. 2)/3.cpp"
        "code/competition/Codeforces Round #628 (Div. 2)/4.cpp"
        "code/competition/Codeforces Round #628 (Div. 2)/5.cpp"
        "code/competition/Codeforces Round #628 (Div. 2)/6.cpp"
        "code/competition/Codeforces Round #628 (Div. 2)/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #631/1.cpp"
        "code/competition/Codeforces Round #631/2.cpp"
        "code/competition/Codeforces Round #631/3.cpp"
        "code/competition/Codeforces Round #631/33.cpp"
        "code/competition/Codeforces Round #631/333.cpp"
        "code/competition/Codeforces Round #631/3ans.cpp"
        "code/competition/Codeforces Round #631/4.cpp"
        "code/competition/Codeforces Round #631/5.cpp"
        "code/competition/Codeforces Round #631/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #632/1.cpp"
        "code/competition/Codeforces Round #632/2.cpp"
        "code/competition/Codeforces Round #632/3.cpp"
        "code/competition/Codeforces Round #632/4.cpp"
        "code/competition/Codeforces Round #632/5.cpp"
        "code/competition/Codeforces Round #632/6.cpp"
        "code/competition/Codeforces Round #633/1.cpp"
        "code/competition/Codeforces Round #633/2.cpp"
        "code/competition/Codeforces Round #633/3.cpp"
        "code/competition/Codeforces Round #633/4.cpp"
        "code/competition/Codeforces Round #633/5.cpp"
        "code/competition/Codeforces Round #635/1.cpp"
        "code/competition/Codeforces Round #635/2.cpp"
        "code/competition/Codeforces Round #635/3.cpp"
        "code/competition/Codeforces Round #635/4.cpp"
        "code/competition/Codeforces Round #635/5.cpp"
        "code/competition/Codeforces Round #635/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #637/1.cpp"
        "code/competition/Codeforces Round #637/2.cpp"
        "code/competition/Codeforces Round #637/3.cpp"
        "code/competition/Codeforces Round #637/4.cpp"
        "code/competition/Codeforces Round #637/4bk.cpp"
        "code/competition/Codeforces Round #637/5.cpp"
        "code/competition/Codeforces Round #637/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #638/1.cpp"
        "code/competition/Codeforces Round #638/2.cpp"
        "code/competition/Codeforces Round #638/3.cpp"
        "code/competition/Codeforces Round #638/4.cpp"
        "code/competition/Codeforces Round #638/5.cpp"
        "code/competition/Codeforces Round #639/1.cpp"
        "code/competition/Codeforces Round #639/2.cpp"
        "code/competition/Codeforces Round #639/3.cpp"
        "code/competition/Codeforces Round #639/4.cpp"
        "code/competition/Codeforces Round #639/5.cpp"
        "code/competition/Codeforces Round #639/6.cpp"
        "code/competition/Codeforces Round #639/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #641/1.cpp"
        "code/competition/Codeforces Round #641/2.cpp"
        "code/competition/Codeforces Round #641/3.cpp"
        "code/competition/Codeforces Round #641/3ans.cpp"
        "code/competition/Codeforces Round #641/4.cpp"
        "code/competition/Codeforces Round #641/5.cpp"
        "code/competition/Codeforces Round #641/6.cpp"
        "code/competition/Codeforces Round #643/1.cpp"
        "code/competition/Codeforces Round #643/2.cpp"
        "code/competition/Codeforces Round #643/3.cpp"
        "code/competition/Codeforces Round #643/4.cpp"
        "code/competition/Codeforces Round #643/5.cpp"
        "code/competition/Codeforces Round #643/6.cpp"
        "code/competition/Codeforces Round #644/1.cpp"
        "code/competition/Codeforces Round #644/2.cpp"
        "code/competition/Codeforces Round #644/3.cpp"
        "code/competition/Codeforces Round #644/4.cpp"
        "code/competition/Codeforces Round #644/5.cpp"
        "code/competition/Codeforces Round #644/6.cpp"
        "code/competition/Codeforces Round #644/6ans.cpp"
        "code/competition/Codeforces Round #644/7.cpp"
        "code/competition/Codeforces Round #645/1.cpp"
        "code/competition/Codeforces Round #645/2.cpp"
        "code/competition/Codeforces Round #645/3.cpp"
        "code/competition/Codeforces Round #645/4.cpp"
        "code/competition/Codeforces Round #645/5.cpp"
        "code/competition/Codeforces Round #645/6.cpp"
        "code/competition/Codeforces Round #646/1.cpp"
        "code/competition/Codeforces Round #646/2.cpp"
        "code/competition/Codeforces Round #646/3.cpp"
        "code/competition/Codeforces Round #646/4.cpp"
        "code/competition/Codeforces Round #646/5.cpp"
        "code/competition/Codeforces Round #647/1.cpp"
        "code/competition/Codeforces Round #647/2.cpp"
        "code/competition/Codeforces Round #647/3.cpp"
        "code/competition/Codeforces Round #647/4.cpp"
        "code/competition/Codeforces Round #647/5.cpp"
        "code/competition/Codeforces Round #647/6.cpp"
        "code/competition/Codeforces Round #648/1.cpp"
        "code/competition/Codeforces Round #648/2.cpp"
        "code/competition/Codeforces Round #648/3.cpp"
        "code/competition/Codeforces Round #648/4.cpp"
        "code/competition/Codeforces Round #648/5.cpp"
        "code/competition/Codeforces Round #648/6.cpp"
        "code/competition/Codeforces Round #649/1.cpp"
        "code/competition/Codeforces Round #649/2.cpp"
        "code/competition/Codeforces Round #649/3.cpp"
        "code/competition/Codeforces Round #649/4.cpp"
        "code/competition/Codeforces Round #650/1.cpp"
        "code/competition/Codeforces Round #650/2.cpp"
        "code/competition/Codeforces Round #650/3.cpp"
        "code/competition/Codeforces Round #650/4.cpp"
        "code/competition/Codeforces Round #650/5.cpp"
        "code/competition/Codeforces Round #650/6.cpp"
        "code/competition/Codeforces Round #654/1.cpp"
        "code/competition/Codeforces Round #654/2.cpp"
        "code/competition/Codeforces Round #654/3.cpp"
        "code/competition/Codeforces Round #654/4.cpp"
        "code/competition/Codeforces Round #654/5.cpp"
        "code/competition/Codeforces Round #655/1.cpp"
        "code/competition/Codeforces Round #655/2.cpp"
        "code/competition/Codeforces Round #655/3.cpp"
        "code/competition/Codeforces Round #655/4.cpp"
        "code/competition/Codeforces Round #655/5.cpp"
        "code/competition/Codeforces Round #655/6.cpp"
        "code/competition/Codeforces Round #656/1.cpp"
        "code/competition/Codeforces Round #656/2.cpp"
        "code/competition/Codeforces Round #657 (Div. 2)/1.cpp"
        "code/competition/Codeforces Round #657 (Div. 2)/2.cpp"
        "code/competition/Codeforces Round #657 (Div. 2)/3.cpp"
        "code/competition/Codeforces Round #658/1.cpp"
        "code/competition/Codeforces Round #658/2.cpp"
        "code/competition/Codeforces Round #658/3.cpp"
        "code/competition/Codeforces Round #658/4.cpp"
        "code/competition/Codeforces Round #658/5.cpp"
        "code/competition/Codeforces Round #659/1.cpp"
        "code/competition/Codeforces Round #659/2.cpp"
        "code/competition/Codeforces Round #659/3.cpp"
        "code/competition/Codeforces Round #659/4.cpp"
        "code/competition/Codeforces Round #660/1.cpp"
        "code/competition/Codeforces Round #660/2.cpp"
        "code/competition/Codeforces Round #660/3.cpp"
        "code/competition/Codeforces Round #660/4.cpp"
        "code/competition/Codeforces Round #660/5.cpp"
        "code/competition/Codeforces Round #661/1.cpp"
        "code/competition/Codeforces Round #661/2.cpp"
        "code/competition/Codeforces Round #661/3.cpp"
        "code/competition/Codeforces Round #661/4.cpp"
        "code/competition/Codeforces Round #661/51.cpp"
        "code/competition/Codeforces Round #662/1.cpp"
        "code/competition/Codeforces Round #662/2.cpp"
        "code/competition/Codeforces Round #662/3.cpp"
        "code/competition/Codeforces Round #662/4.cpp"
        "code/competition/Codeforces Round #662/5.cpp"
        "code/competition/Codeforces Round #662/6.cpp"
        "code/competition/Codeforces Round #663/1.cpp"
        "code/competition/Codeforces Round #663/2.cpp"
        "code/competition/Codeforces Round #664/1.cpp"
        "code/competition/Codeforces Round #664/2.cpp"
        "code/competition/Codeforces Round #664/3.cpp"
        "code/competition/Codeforces Round #664/4.cpp"
        "code/competition/Codeforces Round #665/1.cpp"
        "code/competition/Codeforces Round #665/2.cpp"
        "code/competition/Codeforces Round #665/3.cpp"
        "code/competition/Codeforces Round #665/4.cpp"
        "code/competition/Codeforces Round #665/5.cpp"
        "code/competition/Codeforces Round #666/1.cpp"
        "code/competition/Codeforces Round #666/2.cpp"
        "code/competition/Codeforces Round #666/3.cpp"
        "code/competition/Codeforces Round #666/4.cpp"
        "code/competition/Codeforces Round #666/5.cpp"
        "code/competition/Codeforces Round #666/6.cpp"
        "code/competition/Codeforces Round #667/1.cpp"
        "code/competition/Codeforces Round #667/2.cpp"
        "code/competition/Codeforces Round #667/3.cpp"
        "code/competition/Codeforces Round #667/4.cpp"
        "code/competition/Codeforces Round #668/1.cpp"
        "code/competition/Codeforces Round #668/2.cpp"
        "code/competition/Codeforces Round #668/3.cpp"
        "code/competition/Codeforces Round #668/4.cpp"
        "code/competition/Codeforces Round #668/5.cpp"
        "code/competition/Codeforces Round #668/6.cpp"
        "code/competition/Codeforces Round #669/1.cpp"
        "code/competition/Codeforces Round #669/2.cpp"
        "code/competition/Codeforces Round #669/3.cpp"
        "code/competition/Codeforces Round #669/4.cpp"
        "code/competition/Codeforces Round #670/1.cpp"
        "code/competition/Codeforces Round #670/2.cpp"
        "code/competition/Codeforces Round #670/3.cpp"
        "code/competition/Codeforces Round #671/1.cpp"
        "code/competition/Codeforces Round #671/2.cpp"
        "code/competition/Codeforces Round #671/3.cpp"
        "code/competition/Codeforces Round #671/4.cpp"
        "code/competition/Codeforces Round #671/5.cpp"
        "code/competition/Codeforces Round #671/6.cpp"
        "code/competition/Codeforces Round #672/1.cpp"
        "code/competition/Codeforces Round #672/2.cpp"
        "code/competition/Codeforces Round #672/3.cpp"
        "code/competition/Codeforces Round #672/4.cpp"
        "code/competition/Codeforces Round #672/5.cpp"
        "code/competition/Codeforces Round #673/1.cpp"
        "code/competition/Codeforces Round #673/2.cpp"
        "code/competition/Codeforces Round #673/3.cpp"
        "code/competition/Codeforces Round #673/4.cpp"
        "code/competition/Codeforces Round #673/5.cpp"
        "code/competition/Codeforces Round #674/4.cpp"
        "code/competition/Codeforces Round #674/5.cpp"
        "code/competition/Codeforces Round #675/1.cpp"
        "code/competition/Codeforces Round #675/2.cpp"
        "code/competition/Codeforces Round #676/1.cpp"
        "code/competition/Codeforces Round #676/2.cpp"
        "code/competition/Codeforces Round #676/3.cpp"
        "code/competition/Codeforces Round #676/4.cpp"
        "code/competition/Codeforces Round #677/1.cpp"
        "code/competition/Codeforces Round #677/2.cpp"
        "code/competition/Codeforces Round #677/3.cpp"
        "code/competition/Codeforces Round #677/4.cpp"
        "code/competition/Codeforces Round #678/1.cpp"
        "code/competition/Codeforces Round #678/2.cpp"
        "code/competition/Codeforces Round #678/3.cpp"
        "code/competition/Codeforces Round #678/4.cpp"
        "code/competition/Codeforces Round #678/5.cpp"
        "code/competition/Codeforces Round #678/6.cpp"
        "code/competition/Codeforces Round #679/1.cpp"
        "code/competition/Codeforces Round #679/4.cpp"
        "code/competition/Codeforces Round #680/1.cpp"
        "code/competition/Codeforces Round #680/2.cpp"
        "code/competition/Codeforces Round #680/3.cpp"
        "code/competition/Codeforces Round #680/4.cpp"
        "code/competition/Codeforces Round #681/1.cpp"
        "code/competition/Codeforces Round #681/2.cpp"
        "code/competition/Codeforces Round #681/3.cpp"
        "code/competition/Codeforces Round #681/4.cpp"
        "code/competition/Codeforces Round #681/5.cpp"
        "code/competition/Codeforces Round #681/6.cpp"
        "code/competition/Codeforces Round #682/1.cpp"
        "code/competition/Codeforces Round #682/2.cpp"
        "code/competition/Codeforces Round #682/3.cpp"
        "code/competition/Codeforces Round #682/4.cpp"
        "code/competition/Codeforces Round #682/5.cpp"
        "code/competition/Codeforces Round #683/1.cpp"
        "code/competition/Codeforces Round #685/1.cpp"
        "code/competition/Codeforces Round #685/2.cpp"
        "code/competition/Codeforces Round #685/3.cpp"
        "code/competition/Codeforces Round #685/4.cpp"
        "code/competition/Codeforces Round #685/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #686/1.cpp"
        "code/competition/Codeforces Round #686/2.cpp"
        "code/competition/Codeforces Round #686/3.cpp"
        "code/competition/Codeforces Round #686/4.cpp"
        "code/competition/Codeforces Round #686/5.cpp"
        "code/competition/Codeforces Round #687/1.cpp"
        "code/competition/Codeforces Round #687/2.cpp"
        "code/competition/Codeforces Round #688/1.cpp"
        "code/competition/Codeforces Round #688/2.cpp"
        "code/competition/Codeforces Round #688/3.cpp"
        "code/competition/Codeforces Round #688/4.cpp"
        "code/competition/Codeforces Round #689/1.cpp"
        "code/competition/Codeforces Round #689/2.cpp"
        "code/competition/Codeforces Round #689/3.cpp"
        "code/competition/Codeforces Round #689/4.cpp"
        "code/competition/Codeforces Round #689/5.cpp"
        "code/competition/Codeforces Round #694/1.cpp"
        "code/competition/Codeforces Round #694/2.cpp"
        "code/competition/Codeforces Round #694/3.cpp"
        "code/competition/Codeforces Round #694/4.cpp"
        "code/competition/Codeforces Round #694/5.cpp"
        "code/competition/Codeforces Round #695/1.cpp"
        "code/competition/Codeforces Round #695/2.cpp"
        "code/competition/Codeforces Round #695/3.cpp"
        "code/competition/Codeforces Round #695/4.cpp"
        "code/competition/Codeforces Round #696/1.cpp"
        "code/competition/Codeforces Round #696/2.cpp"
        "code/competition/Codeforces Round #696/4.cpp"
        "code/competition/Codeforces Round #698/1.cpp"
        "code/competition/Codeforces Round #698/2.cpp"
        "code/competition/Codeforces Round #698/3.cpp"
        "code/competition/Codeforces Round #698/4.cpp"
        "code/competition/Codeforces Round #698/5.cpp"
        "code/competition/Codeforces Round #699/1.cpp"
        "code/competition/Codeforces Round #699/2.cpp"
        "code/competition/Codeforces Round #699/3.cpp"
        "code/competition/Codeforces Round #699/4.cpp"
        "code/competition/Codeforces Round #699/5.cpp"
        "code/competition/Codeforces Round #700/1.cpp"
        "code/competition/Codeforces Round #700/2.cpp"
        "code/competition/Codeforces Round #700/3.cpp"
        "code/competition/Codeforces Round #700/4.cpp"
        "code/competition/Codeforces Round #700/4t.cpp"
        "code/competition/Codeforces Round #700/5.cpp"
        "code/competition/Codeforces Round #700/6.cpp"
        "code/competition/Codeforces Round #701/1.cpp"
        "code/competition/Codeforces Round #701/2.cpp"
        "code/competition/Codeforces Round #701/3.cpp"
        "code/competition/Codeforces Round #701/4.cpp"
        "code/competition/Codeforces Round #701/5.cpp"
        "code/competition/Codeforces Round #702/1.cpp"
        "code/competition/Codeforces Round #702/2.cpp"
        "code/competition/Codeforces Round #702/3.cpp"
        "code/competition/Codeforces Round #702/4.cpp"
        "code/competition/Codeforces Round #702/5.cpp"
        "code/competition/Codeforces Round #702/6.cpp"
        "code/competition/Codeforces Round #702/7.cpp"
        "code/competition/Codeforces Round #703/1.cpp"
        "code/competition/Codeforces Round #703/2.cpp"
        "code/competition/Codeforces Round #703/3.cpp"
        "code/competition/Codeforces Round #703/4.cpp"
        "code/competition/Codeforces Round #703/5.cpp"
        "code/competition/Codeforces Round #704/1.cpp"
        "code/competition/Codeforces Round #704/2.cpp"
        "code/competition/Codeforces Round #704/3.cpp"
        "code/competition/Codeforces Round #704/4.cpp"
        "code/competition/Codeforces Round #706/1.cpp"
        "code/competition/Codeforces Round #706/2.cpp"
        "code/competition/Codeforces Round #706/3.cpp"
        "code/competition/Codeforces Round #706/4.cpp"
        "code/competition/Codeforces Round #706/5.cpp"
        "code/competition/Codeforces Round #706/6.cpp"
        "code/competition/Codeforces Round #707/1.cpp"
        "code/competition/Codeforces Round #707/2.cpp"
        "code/competition/Codeforces Round #707/3.cpp"
        "code/competition/Codeforces Round #707/4.cpp"
        "code/competition/Codeforces Round #708/1.cpp"
        "code/competition/Codeforces Round #708/2.cpp"
        "code/competition/Codeforces Round #708/3.cpp"
        "code/competition/Codeforces Round #708/4.cpp"
        "code/competition/Codeforces Round #708/5.cpp"
        "code/competition/Codeforces Round #709/1.cpp"
        "code/competition/Codeforces Round #709/2.cpp"
        "code/competition/Codeforces Round #709/3.cpp"
        "code/competition/Codeforces Round #709/4.cpp"
        "code/competition/Codeforces Round #709/5.cpp"
        "code/competition/Codeforces Round #710/1.cpp"
        "code/competition/Codeforces Round #710/2.cpp"
        "code/competition/Codeforces Round #710/3.cpp"
        "code/competition/Codeforces Round #710/4.cpp"
        "code/competition/Codeforces Round #710/5.cpp"
        "code/competition/Codeforces Round #710/6.cpp"
        "code/competition/Codeforces Round #710/7.cpp"
        "code/competition/Codeforces Round #710/7aaa.cpp"
        "code/competition/Codeforces Round #710/7ans.cpp"
        "code/competition/Codeforces Round #711/1.cpp"
        "code/competition/Codeforces Round #711/2.cpp"
        "code/competition/Codeforces Round #711/3.cpp"
        "code/competition/Codeforces Round #711/4.cpp"
        "code/competition/Codeforces Round #711/5.cpp"
        "code/competition/Codeforces Round #711/6.cpp"
        "code/competition/Codeforces Round #712/1.cpp"
        "code/competition/Codeforces Round #712/2.cpp"
        "code/competition/Codeforces Round #712/3.cpp"
        "code/competition/Codeforces Round #712/4.cpp"
        "code/competition/Codeforces Round #712/5.cpp"
        "code/competition/Codeforces Round #713/1.cpp"
        "code/competition/Codeforces Round #714/1.cpp"
        "code/competition/Codeforces Round #714/2.cpp"
        "code/competition/Codeforces Round #714/3.cpp"
        "code/competition/Codeforces Round #714/4.cpp"
        "code/competition/Codeforces Round #714/5.cpp"
        "code/competition/Codeforces Round #714/6.cpp"
        "code/competition/Codeforces Round #715/1.cpp"
        "code/competition/Codeforces Round #715/2.cpp"
        "code/competition/Codeforces Round #715/3.cpp"
        "code/competition/Codeforces Round #715/4.cpp"
        "code/competition/Codeforces Round #715/5.cpp"
        "code/competition/Codeforces Round #716/1.cpp"
        "code/competition/Codeforces Round #716/2.cpp"
        "code/competition/Codeforces Round #716/3.cpp"
        "code/competition/Codeforces Round #716/4.cpp"
        "code/competition/Codeforces Round #717/1.cpp"
        "code/competition/Codeforces Round #717/2.cpp"
        "code/competition/Codeforces Round #717/3.cpp"
        "code/competition/Codeforces Round #717/4.cpp"
        "code/competition/Codeforces Round #717/5.cpp"
        "code/competition/Codeforces Round #719/1.cpp"
        "code/competition/Codeforces Round #719/2.cpp"
        "code/competition/Codeforces Round #719/3.cpp"
        "code/competition/Codeforces Round #719/4.cpp"
        "code/competition/Codeforces Round #719/5.cpp"
        "code/competition/Codeforces Round #719/6.cpp"
        "code/competition/Codeforces Round #719/7.cpp"
        "code/competition/Codeforces Round #719/8.cpp"
        "code/competition/Codeforces Round #719/8ans.cpp"
        "code/competition/Codeforces Round #720/1.cpp"
        "code/competition/Codeforces Round #721/1.cpp"
        "code/competition/Codeforces Round #721/2.cpp"
        "code/competition/Codeforces Round #721/2ans.cpp"
        "code/competition/Codeforces Round #721/3.cpp"
        "code/competition/Codeforces Round #721/4.cpp"
        "code/competition/Codeforces Round #721/5.cpp"
        "code/competition/Codeforces Round #721/5ans.cpp"
        "code/competition/Codeforces Round #722/1.cpp"
        "code/competition/Codeforces Round #722/2.cpp"
        "code/competition/Codeforces Round #722/3.cpp"
        "code/competition/Codeforces Round #722/4.cpp"
        "code/competition/Codeforces Round #722/5.cpp"
        "code/competition/Codeforces Round #722/tempCodeRunnerFile.cpp"
        "code/competition/Codeforces Round #722/test.cpp"
        "code/competition/Codeforces Round #723/1.cpp"
        "code/competition/Codeforces Round #723/2.cpp"
        "code/competition/Codeforces Round #723/3.cpp"
        "code/competition/Codeforces Round #723/4.cpp"
        "code/competition/Codeforces Round #723/5.cpp"
        "code/competition/Codeforces Round #724/1.cpp"
        "code/competition/Codeforces Round #724/2.cpp"
        "code/competition/Codeforces Round #724/3.cpp"
        "code/competition/Codeforces Round #724/4.cpp"
        "code/competition/Codeforces Round #724/5.cpp"
        "code/competition/Codeforces Round #725/1.cpp"
        "code/competition/Codeforces Round #725/2.cpp"
        "code/competition/Codeforces Round #725/2ans.cpp"
        "code/competition/Codeforces Round #726/1.cpp"
        "code/competition/Codeforces Round #726/2.cpp"
        "code/competition/Codeforces Round #726/3.cpp"
        "code/competition/Codeforces Round #726/4.cpp"
        "code/competition/Codeforces Round #726/5.cpp"
        "code/competition/Codeforces Round #727/1.cpp"
        "code/competition/Codeforces Round #727/2.cpp"
        "code/competition/Codeforces Round #727/3.cpp"
        "code/competition/Codeforces Round #727/4.cpp"
        "code/competition/Codeforces Round #727/5.cpp"
        "code/competition/Codeforces Round #728/1.cpp"
        "code/competition/Codeforces Round #728/2.cpp"
        "code/competition/Codeforces Round #728/3.cpp"
        "code/competition/Codeforces Round #728/4.cpp"
        "code/competition/Codeforces Round #728/5.cpp"
        "code/competition/Codeforces Round #729/1.cpp"
        "code/competition/Codeforces Round #729/2.cpp"
        "code/competition/Codeforces Round #729/3.cpp"
        "code/competition/Codeforces Round #729/4.cpp"
        "code/competition/Codeforces Round #729/5.cpp"
        "code/competition/Codeforces Round #730/1.cpp"
        "code/competition/Codeforces Round #730/2.cpp"
        "code/competition/Codeforces Round #730/3.cpp"
        "code/competition/Codeforces Round #730/4.cpp"
        "code/competition/Codeforces Round #730/5.cpp"
        "code/competition/Codeforces Round #731/1.cpp"
        "code/competition/Codeforces Round #731/2.cpp"
        "code/competition/Codeforces Round #731/3.cpp"
        "code/competition/Codeforces Round #731/4.cpp"
        "code/competition/Codeforces Round #731/5.cpp"
        "code/competition/Codeforces Round #731/6.cpp"
        "code/competition/Codeforces Round #731/7.cpp"
        "code/competition/Codeforces Round #732/1.cpp"
        "code/competition/Codeforces Round #732/2.cpp"
        "code/competition/Codeforces Round #732/3.cpp"
        "code/competition/Codeforces Round #732/4.cpp"
        "code/competition/Codeforces Round #732/5.cpp"
        "code/competition/Codeforces Round #733/1.cpp"
        "code/competition/Codeforces Round #733/2.cpp"
        "code/competition/Codeforces Round #733/3.cpp"
        "code/competition/Codeforces Round #733/4.cpp"
        "code/competition/Codeforces Round #733/5.cpp"
        "code/competition/Codeforces Round #733/6.cpp"
        "code/competition/Codeforces Round #735/1.cpp"
        "code/competition/Codeforces Round #736/1.cpp"
        "code/competition/Codeforces Round #736/2.cpp"
        "code/competition/Codeforces Round #736/3.cpp"
        "code/competition/Codeforces Round #736/4.cpp"
        "code/competition/Codeforces Round #736/5.cpp"
        "code/competition/Codeforces Round #737/1.cpp"
        "code/competition/Codeforces Round #737/2.cpp"
        "code/competition/Codeforces Round #737/3.cpp"
        "code/competition/Codeforces Round #737/4.cpp"
        "code/competition/Codeforces Round #737/5.cpp"
        "code/competition/Codeforces Round #738/1.cpp"
        "code/competition/Codeforces Round #738/2.cpp"
        "code/competition/Codeforces Round #738/3.cpp"
        "code/competition/Codeforces Round #738/4.cpp"
        "code/competition/Codeforces Round #738/5.cpp"
        "code/competition/Codeforces Round #738/6.cpp"
        "code/competition/Codeforces Round #739/1.cpp"
        "code/competition/Codeforces Round #739/2.cpp"
        "code/competition/Codeforces Round #742/1.cpp"
        "code/competition/Codeforces Round #742/2.cpp"
        "code/competition/Codeforces Round #742/3.cpp"
        "code/competition/Codeforces Round #742/4.cpp"
        "code/competition/Codeforces Round #742/5.cpp"
        "code/competition/Codeforces Round #742/6.cpp"
        "code/competition/Codeforces Round #751/1.cpp"
        "code/competition/Codeforces Round #751/2.cpp"
        "code/competition/Codeforces Round #751/3.cpp"
        "code/competition/Codeforces Round #751/4.cpp"
        "code/competition/Codeforces Round #751/5.cpp"
        "code/competition/Codeforces Round #752/1.cpp"
        "code/competition/Codeforces Round #753/1.cpp"
        "code/competition/Codeforces Round #753/t.cpp"
        "code/competition/Codeforces Round #753/tt.cpp"
        "code/competition/Codeforces Round #753/ttt.cpp"
        "code/competition/CodeforcesRound#629(Div. 3)/1.cpp"
        "code/competition/CodeforcesRound#629(Div. 3)/2.cpp"
        "code/competition/CodeforcesRound#629(Div. 3)/3.cpp"
        "code/competition/CodeforcesRound#629(Div. 3)/4.cpp"
        "code/competition/CodeforcesRound#629(Div. 3)/5.cpp"
        "code/competition/CodeforcesRound#629(Div. 3)/6.cpp"
        "code/competition/CodeforcesRound#629(Div. 3)/tempCodeRunnerFile.cpp"
        code/competition/CodeforcesRound630/1.cpp
        code/competition/CodeforcesRound630/2.cpp
        code/competition/CodeforcesRound630/3.cpp
        code/competition/CodeforcesRound630/4.cpp
        code/competition/CodeforcesRound630/5.cpp
        "code/competition/CodeRams Algorithm Contest/1.cpp"
        "code/competition/CodeRams Algorithm Contest/2.cpp"
        "code/competition/CodeRams Algorithm Contest/3.cpp"
        "code/competition/CodeRams Algorithm Contest/4.cpp"
        "code/competition/CodeRams Algorithm Contest/5.cpp"
        "code/competition/CodeRams Algorithm Contest/6.cpp"
        "code/competition/Contest 2050 and Codeforces Round #718/1.cpp"
        "code/competition/Contest 2050 and Codeforces Round #718/2.cpp"
        code/competition/debug2021/1.cpp
        code/competition/debug2021/2.cpp
        code/competition/debug2021/3.cpp
        code/competition/debug2021/4.cpp
        code/competition/debug2021/5.cpp
        code/competition/debug2021/6.cpp
        code/competition/debug2021/7.cpp
        code/competition/debug2021/8.cpp
        code/competition/debug2021/9.cpp
        code/competition/debug_2020/1.cpp
        code/competition/debug_2020/2.cpp
        code/competition/debug_2020/3.cpp
        code/competition/debug_2020/4.cpp
        code/competition/debug_2020/5.cpp
        code/competition/debug_2020/6.cpp
        code/competition/debug_2020/7.cpp
        code/competition/debug_2020/8.cpp
        code/competition/debug_2020/9.cpp
        "code/competition/Deltix Round, Spring 2021/1.cpp"
        "code/competition/Deltix Round, Spring 2021/2.cpp"
        "code/competition/Deltix Round, Spring 2021/3.cpp"
        "code/competition/Deltix Round, Spring 2021/4.cpp"
        "code/competition/Deltix Round, Spring 2021/5.cpp"
        "code/competition/Deltix Round, Spring 2021/6.cpp"
        code/competition/dingba_2_20/1.cpp
        code/competition/dingba_2_20/2.cpp
        code/competition/dingba_2_20/3.cpp
        code/competition/dingba_2_20/4.cpp
        code/competition/dingba_2_20/5.cpp
        code/competition/dingba_2_20/6.cpp
        code/competition/dingba_2_20/7.cpp
        code/competition/dingba_2_20/8.cpp
        code/competition/dingba_2_20/9.cpp
        code/competition/dingba_2_20/T2ans.cpp
        code/competition/dingba_2_20/T4ans.cpp
        code/competition/dingba_3_17/1.cpp
        code/competition/dingba_3_17/2.cpp
        code/competition/dingba_3_17/3.cpp
        code/competition/dingba_3_17/4.cpp
        code/competition/dingba_3_17/5.cpp
        code/competition/dingba_7_14/1.cpp
        code/competition/dingba_7_14/2.cpp
        code/competition/dingba_7_14/3.cpp
        code/competition/dingba_7_14/4.cpp
        code/competition/dingba_7_14/5.cpp
        code/competition/dingba_7_14/6.cpp
        code/competition/dingba_7_14/7.cpp
        code/competition/dingba_7_14/8.cpp
        code/competition/dingba_9_7/1.cpp
        code/competition/dingba_9_7/2.cpp
        code/competition/dingba_9_7/3.cpp
        code/competition/dingba_9_7/4.cpp
        code/competition/dingba_9_7/5.cpp
        code/competition/dingba_9_7/6.cpp
        code/competition/dingba_9_7/7.cpp
        code/competition/dingba_9_7/8.cpp
        code/competition/dingbacode2_25/1.cpp
        code/competition/dingbacode2_25/2.cpp
        code/competition/dingbacode2_25/3.cpp
        code/competition/dingbacode2_25/4.cpp
        code/competition/dingbacode2_25/5.cpp
        code/competition/dingbacode2_25/6.cpp
        code/competition/dingbacode2_25/7.cpp
        code/competition/dingbacode2_3/1.cpp
        code/competition/dingbacode2_3/2.cpp
        code/competition/dingbacode2_3/3.cpp
        code/competition/dingbacode2_3/4.cpp
        code/competition/dingbacode2_3/5.cpp
        code/competition/dingbacode2_3/6.cpp
        code/competition/dingbacode2_3/7.cpp
        code/competition/dingbacode2_3/8.cpp
        code/competition/dingbacode2_9/1.cpp
        code/competition/dingbacode2_9/2.cpp
        code/competition/dingbacode2_9/3.cpp
        code/competition/dingbacode2_9/4.cpp
        code/competition/dingbacode2_9/5.cpp
        code/competition/dingbacode2_9/6.cpp
        code/competition/dingbacode9_9/1.cpp
        code/competition/dingbacode9_9/2.cpp
        code/competition/dingbacode9_9/3.cpp
        code/competition/dingbacode9_9/4.cpp
        code/competition/dingbacode9_9/5.cpp
        code/competition/dingbacode_4_7/1.cpp
        code/competition/dingbacode_4_7/2.cpp
        code/competition/dingbacode_4_7/3.cpp
        code/competition/dingbacode_4_7/4.cpp
        code/competition/dingbacode_4_7/5.cpp
        code/competition/dingbacode_4_7/6.cpp
        code/competition/dingbacode_7_10/1.cpp
        code/competition/dingbacode_7_10/10.cpp
        code/competition/dingbacode_7_10/2.cpp
        code/competition/dingbacode_7_10/3.cpp
        code/competition/dingbacode_7_10/4.cpp
        code/competition/dingbacode_7_10/5.cpp
        code/competition/dingbacode_7_10/6.cpp
        code/competition/dingbacode_7_10/7.cpp
        code/competition/dingbacode_7_10/8.cpp
        code/competition/dingbacode_7_10/9.cpp
        code/competition/dingbacode_7_12/1.cpp
        code/competition/dingbacode_7_12/2.cpp
        code/competition/dingbacode_7_12/3.cpp
        code/competition/dingbacode_7_12/4.cpp
        code/competition/dingbacode_7_12/5.cpp
        code/competition/dingbacode_7_12/6.cpp
        code/competition/dingbacode_9_1/1.cpp
        code/competition/dingbacode_9_1/2.cpp
        code/competition/dingbacode_9_1/3.cpp
        code/competition/dingbacode_9_1/4.cpp
        code/competition/dingbacode_9_1/5.cpp
        code/competition/dingbacode_9_1/6.cpp
        code/competition/dingbacode_9_10/1.cpp
        code/competition/dingbacode_9_10/2.cpp
        code/competition/dingbacode_9_10/3.cpp
        code/competition/dingbacode_9_10/4.cpp
        code/competition/dingbacode_9_10/5.cpp
        code/competition/dingbacode_9_2/1.cpp
        code/competition/dingbacode_9_2/2.cpp
        code/competition/dingbacode_9_2/2_bu.cpp
        code/competition/dingbacode_9_2/3.cpp
        code/competition/dingbacode_9_2/4.cpp
        code/competition/dingbacode_9_2/std1.cpp
        code/competition/dingbacode_9_3/1.cpp
        code/competition/dingbacode_9_3/2.cpp
        code/competition/dingbacode_9_3/3.cpp
        code/competition/dingbacode_9_3/4.cpp
        code/competition/dingbacode_9_3/5.cpp
        code/competition/dingbacode_9_3/6.cpp
        code/competition/dingbacode_9_3/7.cpp
        code/competition/duoxiao1/1.cpp
        code/competition/duoxiao1/2.cpp
        code/competition/duoxiao1/3.cpp
        code/competition/duoxiao1/4.cpp
        code/competition/duoxiao1/5.cpp
        code/competition/duoxiao1/6.cpp
        code/competition/duoxiao10/1.cpp
        code/competition/duoxiao10/2.cpp
        code/competition/duoxiao10/3.cpp
        code/competition/duoxiao10/4.cpp
        code/competition/duoxiao10/5.cpp
        code/competition/duoxiao10/6.cpp
        code/competition/duoxiao2/1.cpp
        code/competition/duoxiao2/2.cpp
        code/competition/duoxiao2/3.cpp
        code/competition/duoxiao2/4.cpp
        code/competition/duoxiao2/5.cpp
        code/competition/duoxiao2/6.cpp
        code/competition/duoxiao3/1.cpp
        code/competition/duoxiao3/2.cpp
        code/competition/duoxiao3/3.cpp
        code/competition/duoxiao3/4.cpp
        code/competition/duoxiao3/5.cpp
        code/competition/duoxiao3/6.cpp
        code/competition/duoxiao4/1.cpp
        code/competition/duoxiao4/2.cpp
        code/competition/duoxiao4/3.cpp
        code/competition/duoxiao4/4.cpp
        code/competition/duoxiao4/5.cpp
        code/competition/duoxiao5/1.cpp
        code/competition/duoxiao5/13.cpp
        code/competition/duoxiao5/2.cpp
        code/competition/duoxiao5/3.cpp
        code/competition/duoxiao6/1.cpp
        code/competition/duoxiao6/2.cpp
        code/competition/duoxiao6/3.cpp
        code/competition/duoxiao6/4.cpp
        code/competition/duoxiao6/5.cpp
        code/competition/duoxiao7/1.cpp
        code/competition/duoxiao7/2.cpp
        code/competition/duoxiao7/3.cpp
        code/competition/duoxiao7/4.cpp
        code/competition/duoxiao7/5.cpp
        code/competition/duoxiao7/6.cpp
        code/competition/duoxiao7/t.cpp
        code/competition/duoxiao8/1.cpp
        code/competition/duoxiao8/2.cpp
        code/competition/duoxiao8/3.cpp
        code/competition/duoxiao8/4.cpp
        code/competition/duoxiao8/5.cpp
        code/competition/duoxiao8/6.cpp
        code/competition/duoxiao9/1.cpp
        code/competition/duoxiao9/2.cpp
        code/competition/duoxiao9/3.cpp
        code/competition/duoxiao9/4.cpp
        code/competition/duoxiao9/5.cpp
        code/competition/duoxiao9/6.cpp
        code/competition/edu_cf_rd80/1.cpp
        code/competition/edu_cf_rd80/2.cpp
        code/competition/edu_cf_rd80/3.cpp
        code/competition/edu_cf_rd81/1.cpp
        code/competition/edu_cf_rd81/2.cpp
        code/competition/edu_cf_rd81/3.cpp
        code/competition/edu_cf_rd81/4.cpp
        code/competition/edu_cf_rd_82/1.cpp
        code/competition/edu_cf_rd_82/2.cpp
        code/competition/edu_cf_rd_82/3.cpp
        code/competition/edu_cf_rd_82/3t.cpp
        code/competition/edu_cf_rd_82/4.cpp
        code/competition/edu_cf_rd_82/4ans.cpp
        code/competition/edu_cf_rd_82/5.cpp
        code/competition/edu_cf_rd_82/6.cpp
        "code/competition/Educational Codeforces Round 100/1.cpp"
        "code/competition/Educational Codeforces Round 100/2.cpp"
        "code/competition/Educational Codeforces Round 100/3.cpp"
        "code/competition/Educational Codeforces Round 100/4.cpp"
        "code/competition/Educational Codeforces Round 100/5.cpp"
        "code/competition/Educational Codeforces Round 101/1.cpp"
        "code/competition/Educational Codeforces Round 101/2.cpp"
        "code/competition/Educational Codeforces Round 101/3.cpp"
        "code/competition/Educational Codeforces Round 101/4.cpp"
        "code/competition/Educational Codeforces Round 101/5.cpp"
        "code/competition/Educational Codeforces Round 102/1.cpp"
        "code/competition/Educational Codeforces Round 102/2.cpp"
        "code/competition/Educational Codeforces Round 102/3.cpp"
        "code/competition/Educational Codeforces Round 102/4.cpp"
        "code/competition/Educational Codeforces Round 103/1.cpp"
        "code/competition/Educational Codeforces Round 103/2.cpp"
        "code/competition/Educational Codeforces Round 103/3.cpp"
        "code/competition/Educational Codeforces Round 103/4.cpp"
        "code/competition/Educational Codeforces Round 104/1.cpp"
        "code/competition/Educational Codeforces Round 104/2.cpp"
        "code/competition/Educational Codeforces Round 104/3.cpp"
        "code/competition/Educational Codeforces Round 104/4.cpp"
        "code/competition/Educational Codeforces Round 106/1.cpp"
        "code/competition/Educational Codeforces Round 106/2.cpp"
        "code/competition/Educational Codeforces Round 106/3.cpp"
        "code/competition/Educational Codeforces Round 106/4.cpp"
        "code/competition/Educational Codeforces Round 106/5.cpp"
        "code/competition/Educational Codeforces Round 107/1.cpp"
        "code/competition/Educational Codeforces Round 107/2.cpp"
        "code/competition/Educational Codeforces Round 107/3.cpp"
        "code/competition/Educational Codeforces Round 107/4.cpp"
        "code/competition/Educational Codeforces Round 107/5.cpp"
        "code/competition/Educational Codeforces Round 108/1.cpp"
        "code/competition/Educational Codeforces Round 108/2.cpp"
        "code/competition/Educational Codeforces Round 108/3.cpp"
        "code/competition/Educational Codeforces Round 108/4.cpp"
        "code/competition/Educational Codeforces Round 108/5.cpp"
        "code/competition/Educational Codeforces Round 109/1.cpp"
        "code/competition/Educational Codeforces Round 109/2.cpp"
        "code/competition/Educational Codeforces Round 109/3.cpp"
        "code/competition/Educational Codeforces Round 109/4.cpp"
        "code/competition/Educational Codeforces Round 109/5.cpp"
        "code/competition/Educational Codeforces Round 110/1.cpp"
        "code/competition/Educational Codeforces Round 110/2.cpp"
        "code/competition/Educational Codeforces Round 110/3.cpp"
        "code/competition/Educational Codeforces Round 110/4.cpp"
        "code/competition/Educational Codeforces Round 110/5.cpp"
        "code/competition/Educational Codeforces Round 111/1.cpp"
        "code/competition/Educational Codeforces Round 111/2.cpp"
        "code/competition/Educational Codeforces Round 111/3.cpp"
        "code/competition/Educational Codeforces Round 111/4.cpp"
        "code/competition/Educational Codeforces Round 111/5.cpp"
        "code/competition/Educational Codeforces Round 114/1.cpp"
        "code/competition/Educational Codeforces Round 114/2.cpp"
        "code/competition/Educational Codeforces Round 114/3.cpp"
        "code/competition/Educational Codeforces Round 114/4.cpp"
        "code/competition/Educational Codeforces Round 114/5.cpp"
        "code/competition/Educational Codeforces Round 114/6.cpp"
        "code/competition/Educational Codeforces Round 64/1.cpp"
        "code/competition/Educational Codeforces Round 64/2.cpp"
        "code/competition/Educational Codeforces Round 64/3.cpp"
        "code/competition/Educational Codeforces Round 64/4.cpp"
        "code/competition/Educational Codeforces Round 66/1.cpp"
        "code/competition/Educational Codeforces Round 66/2.cpp"
        "code/competition/Educational Codeforces Round 66/3.cpp"
        "code/competition/Educational Codeforces Round 66/4.cpp"
        "code/competition/Educational Codeforces Round 69/1.cpp"
        "code/competition/Educational Codeforces Round 69/2.cpp"
        "code/competition/Educational Codeforces Round 69/3.cpp"
        "code/competition/Educational Codeforces Round 69/4.cpp"
        "code/competition/Educational Codeforces Round 70/1.cpp"
        "code/competition/Educational Codeforces Round 70/2.cpp"
        "code/competition/Educational Codeforces Round 70/3.cpp"
        "code/competition/Educational Codeforces Round 70/4.cpp"
        "code/competition/Educational Codeforces Round 70/5.cpp"
        "code/competition/Educational Codeforces Round 71/1.cpp"
        "code/competition/Educational Codeforces Round 71/2.cpp"
        "code/competition/Educational Codeforces Round 71/3.cpp"
        "code/competition/Educational Codeforces Round 71/4.cpp"
        "code/competition/Educational Codeforces Round 71/5.cpp"
        "code/competition/Educational Codeforces Round 71/tempCodeRunnerFile.cpp"
        "code/competition/Educational Codeforces Round 74/1.cpp"
        "code/competition/Educational Codeforces Round 74/2.cpp"
        "code/competition/Educational Codeforces Round 74/3.cpp"
        "code/competition/Educational Codeforces Round 74/4.cpp"
        "code/competition/Educational Codeforces Round 74/5.cpp"
        "code/competition/Educational Codeforces Round 83/1.cpp"
        "code/competition/Educational Codeforces Round 83/2.cpp"
        "code/competition/Educational Codeforces Round 83/3.cpp"
        "code/competition/Educational Codeforces Round 83/4.cpp"
        "code/competition/Educational Codeforces Round 83/5.cpp"
        "code/competition/Educational Codeforces Round 83/tempCodeRunnerFile.cpp"
        "code/competition/Educational Codeforces Round 84/1.cpp"
        "code/competition/Educational Codeforces Round 84/2.cpp"
        "code/competition/Educational Codeforces Round 84/3.cpp"
        "code/competition/Educational Codeforces Round 84/4.cpp"
        "code/competition/Educational Codeforces Round 84/5.cpp"
        "code/competition/Educational Codeforces Round 84/5bu.cpp"
        "code/competition/Educational Codeforces Round 86/1.cpp"
        "code/competition/Educational Codeforces Round 86/2.cpp"
        "code/competition/Educational Codeforces Round 86/3.cpp"
        "code/competition/Educational Codeforces Round 86/4.cpp"
        "code/competition/Educational Codeforces Round 86/5.cpp"
        "code/competition/Educational Codeforces Round 88/1.cpp"
        "code/competition/Educational Codeforces Round 88/2.cpp"
        "code/competition/Educational Codeforces Round 88/3.cpp"
        "code/competition/Educational Codeforces Round 88/4.cpp"
        "code/competition/Educational Codeforces Round 88/5.cpp"
        "code/competition/Educational Codeforces Round 88/6.cpp"
        "code/competition/Educational Codeforces Round 88/tempCodeRunnerFile.cpp"
        "code/competition/Educational Codeforces Round 89/1.cpp"
        "code/competition/Educational Codeforces Round 89/2.cpp"
        "code/competition/Educational Codeforces Round 90/1.cpp"
        "code/competition/Educational Codeforces Round 90/2.cpp"
        "code/competition/Educational Codeforces Round 90/3.cpp"
        "code/competition/Educational Codeforces Round 90/4.cpp"
        "code/competition/Educational Codeforces Round 91/1.cpp"
        "code/competition/Educational Codeforces Round 91/2.cpp"
        "code/competition/Educational Codeforces Round 91/3.cpp"
        "code/competition/Educational Codeforces Round 91/4.cpp"
        "code/competition/Educational Codeforces Round 91/5.cpp"
        "code/competition/Educational Codeforces Round 92/1.cpp"
        "code/competition/Educational Codeforces Round 92/2.cpp"
        "code/competition/Educational Codeforces Round 92/3.cpp"
        "code/competition/Educational Codeforces Round 92/4.cpp"
        "code/competition/Educational Codeforces Round 92/5.cpp"
        "code/competition/Educational Codeforces Round 92/6.cpp"
        "code/competition/Educational Codeforces Round 93/1.cpp"
        "code/competition/Educational Codeforces Round 93/2.cpp"
        "code/competition/Educational Codeforces Round 93/3.cpp"
        "code/competition/Educational Codeforces Round 93/4.cpp"
        "code/competition/Educational Codeforces Round 93/5.cpp"
        "code/competition/Educational Codeforces Round 93/5ans.cpp"
        "code/competition/Educational Codeforces Round 93/6.cpp"
        "code/competition/Educational Codeforces Round 94/1.cpp"
        "code/competition/Educational Codeforces Round 94/2.cpp"
        "code/competition/Educational Codeforces Round 94/3.cpp"
        "code/competition/Educational Codeforces Round 94/4.cpp"
        "code/competition/Educational Codeforces Round 94/5.cpp"
        "code/competition/Educational Codeforces Round 94/6.cpp"
        "code/competition/Educational Codeforces Round 95/1.cpp"
        "code/competition/Educational Codeforces Round 95/2.cpp"
        "code/competition/Educational Codeforces Round 95/3.cpp"
        "code/competition/Educational Codeforces Round 95/4.cpp"
        "code/competition/Educational Codeforces Round 95/5.cpp"
        "code/competition/Educational Codeforces Round 95/6.cpp"
        "code/competition/Educational Codeforces Round 96/1.cpp"
        "code/competition/Educational Codeforces Round 96/2.cpp"
        "code/competition/Educational Codeforces Round 96/3.cpp"
        "code/competition/Educational Codeforces Round 96/4.cpp"
        "code/competition/Educational Codeforces Round 96/5.cpp"
        "code/competition/Educational Codeforces Round 97/1.cpp"
        "code/competition/Educational Codeforces Round 97/2.cpp"
        "code/competition/Educational Codeforces Round 97/3.cpp"
        "code/competition/Educational Codeforces Round 97/4.cpp"
        "code/competition/Educational Codeforces Round 97/5.cpp"
        "code/competition/Educational Codeforces Round 98/1.cpp"
        "code/competition/Educational Codeforces Round 98/2.cpp"
        "code/competition/Educational Codeforces Round 98/3.cpp"
        "code/competition/Educational Codeforces Round 98/4.cpp"
        "code/competition/Educational Codeforces Round 98/5.cpp"
        "code/competition/Educational Codeforces Round 99/1.cpp"
        "code/competition/Educational Codeforces Round 99/2.cpp"
        "code/competition/Educational Codeforces Round 99/3.cpp"
        "code/competition/Educational Codeforces Round 99/4.cpp"
        "code/competition/Educational Codeforces Round 99/5.cpp"
        code/competition/EducationalRound85/1.cpp
        code/competition/EducationalRound85/2.cpp
        code/competition/EducationalRound85/3.cpp
        code/competition/EducationalRound85/4.cpp
        code/competition/EducationalRound85/5.cpp
        code/competition/EducationalRound87/1.cpp
        code/competition/EducationalRound87/2.cpp
        code/competition/EducationalRound87/3.cpp
        code/competition/EducationalRound87/4.cpp
        code/competition/EducationalRound87/5.cpp
        code/competition/EducationalRound87/tempCodeRunnerFile.cpp
        code/competition/eoj/1.cpp
        code/competition/eoj/2.cpp
        code/competition/eoj/3.cpp
        code/competition/eoj/4.cpp
        code/competition/eoj/5.cpp
        code/competition/eoj/6.cpp
        code/competition/eoj/tempCodeRunnerFile.cpp
        "code/competition/EOJ Monthly 2020.7/1.cpp"
        "code/competition/EOJ Monthly 2020.7/2.cpp"
        "code/competition/EOJ Monthly 2020.7/3.cpp"
        "code/competition/EOJ Monthly 2020.7/4.cpp"
        "code/competition/EOJ Monthly 2020.7/5.cpp"
        "code/competition/EOJ Monthly 2021.2/1.cpp"
        "code/competition/EOJ Monthly 2021.2/2.cpp"
        "code/competition/EOJ Monthly 2021.2/3.cpp"
        "code/competition/EOJ Monthly 2021.2/4.cpp"
        code/competition/good_bye_2019/1.cpp
        code/competition/good_bye_2019/2.cpp
        code/competition/good_bye_2019/3.cpp
        code/competition/good_bye_2019/4.cpp
        code/competition/good_bye_2019/4ans.cpp
        code/competition/good_bye_2019/5.cpp
        "code/competition/Grakn Forces 2020/1.cpp"
        "code/competition/Grakn Forces 2020/2.cpp"
        "code/competition/Grakn Forces 2020/3.cpp"
        "code/competition/Grakn Forces 2020/4.cpp"
        "code/competition/Grakn Forces 2020/5.cpp"
        "code/competition/Grakn Forces 2020/6.cpp"
        code/competition/guoqing10_1/1.cpp
        code/competition/guoqing10_1/D.cpp
        code/competition/guoqing10_1/F.cpp
        code/competition/guoqing10_3/A.cpp
        code/competition/guoqing10_3/C.cpp
        code/competition/guoqing10_3/I.cpp
        code/competition/guoqing10_3/J.cpp
        code/competition/guoqing10_4/1.cpp
        code/competition/guoqing10_4/A.cpp
        code/competition/guoqing10_4/Aans.cpp
        code/competition/guoqing_10_2/1.cpp
        code/competition/guoqing_10_2/B.cpp
        code/competition/guoqing_10_2/gen.cpp
        code/competition/guoqing_10_2/J.cpp
        code/competition/guoqing_10_2/J2.cpp
        code/competition/guoqing_10_2/Jans.cpp
        code/competition/hello_2020/1.cpp
        code/competition/hello_2020/2.cpp
        code/competition/hello_2020/2ans.cpp
        code/competition/hello_2020/3.cpp
        code/competition/huanlesai_5/1.cpp
        code/competition/huanlesai_5/2.cpp
        code/competition/huanlesai_5/3.cpp
        code/competition/huanlesai_5/4.cpp
        code/competition/huanlesai_5/5.cpp
        code/competition/huanlesai_6/1.cpp
        code/competition/huanlesai_6/2.cpp
        code/competition/huanlesai_6/3.cpp
        code/competition/huanlesai_6/4.cpp
        code/competition/huanlesai_6/5.cpp
        code/competition/huanlesai_7/1.cpp
        code/competition/huanlesai_7/2.cpp
        code/competition/huanlesai_7/3.cpp
        code/competition/huawei_ccpc/1.cpp
        code/competition/huawei_ccpc/A.cpp
        code/competition/huawei_ccpc/b.cpp
        code/competition/huawei_ccpc/c.cpp
        code/competition/huawei_ccpc/D.cpp
        code/competition/huawei_ccpc/E.cpp
        "code/competition/II Simulado Ingressantes/1.cpp"
        "code/competition/II Simulado Ingressantes/2.cpp"
        "code/competition/II Simulado Ingressantes/3.cpp"
        "code/competition/II Simulado Ingressantes/4.cpp"
        "code/competition/II Simulado Ingressantes/5.cpp"
        "code/competition/II Simulado Ingressantes/6.cpp"
        "code/competition/II Simulado Ingressantes/7.cpp"
        code/competition/jiliang_9_26/1.cpp
        code/competition/jiliang_9_26/2.cpp
        code/competition/jiliang_9_26/3.cpp
        code/competition/jiliang_9_26/D.cpp
        code/competition/jiliang_9_26/F.cpp
        code/competition/jiliang_9_26/H.cpp
        code/competition/jiliang_9_26/K.cpp
        code/competition/jilin_ACM/1.cpp
        code/competition/jilin_ACM/10.cpp
        code/competition/jilin_ACM/2.cpp
        code/competition/jilin_ACM/3.cpp
        code/competition/jilin_ACM/4.cpp
        code/competition/jilin_ACM/5.cpp
        code/competition/jilin_ACM/6.cpp
        code/competition/jilin_ACM/7.cpp
        code/competition/jilin_ACM/8.cpp
        code/competition/jilin_ACM/9.cpp
        code/competition/jilin_ACM/tempCodeRunnerFile.cpp
        "code/competition/La Salle-Pui Ching Programming Challenge 2019/B.cpp"
        "code/competition/La Salle-Pui Ching Programming Challenge 2019/G.cpp"
        "code/competition/La Salle-Pui Ching Programming Challenge 2019/H.cpp"
        "code/competition/La Salle-Pui Ching Programming Challenge 2019/J.cpp"
        "code/competition/La Salle-Pui Ching Programming Challenge 2019/Jbiao.cpp"
        "code/competition/La Salle-Pui Ching Programming Challenge 2019/K.cpp"
        code/competition/lianxiang2021/1.cpp
        code/competition/lianxiang2021/2.cpp
        code/competition/lianxiang2021/3.cpp
        code/competition/lianxiang2021/4.cpp
        code/competition/lianxiang2021/5.cpp
        code/competition/lianxiang2021/6.cpp
        code/competition/lianxiang2021/7.cpp
        code/competition/lianxiang2021/8.cpp
        code/competition/mei_tuan_2020/1.cpp
        code/competition/mei_tuan_2020/2.cpp
        code/competition/mei_tuan_2020/3.cpp
        code/competition/mei_tuan_2020/4.cpp
        code/competition/mei_tuan_2020/5.cpp
        code/competition/mei_tuan_2020/6.cpp
        code/competition/mei_tuan_2020/7.cpp
        code/competition/mei_tuan_2020/8.cpp
        code/competition/namomo_1/1.cpp
        code/competition/namomo_1/2.cpp
        code/competition/New_coder_summer_10/1.cpp
        code/competition/New_coder_summer_10/2.cpp
        code/competition/New_coder_summer_10/3.cpp
        code/competition/New_coder_summer_10/4.cpp
        code/competition/New_coder_summer_10/5.cpp
        code/competition/New_coder_summer_10/6.cpp
        code/competition/New_coder_summer_10/7.cpp
        code/competition/New_coder_summer_10/8.cpp
        code/competition/New_coder_summer_4/1.cpp
        code/competition/New_coder_summer_4/2.cpp
        code/competition/New_coder_summer_4/3.cpp
        code/competition/New_coder_summer_4/4.cpp
        code/competition/New_coder_summer_4/5.cpp
        code/competition/New_coder_summer_4/6.cpp
        code/competition/New_coder_summer_5/1.cpp
        code/competition/New_coder_summer_5/2.cpp
        code/competition/New_coder_summer_5/3.cpp
        code/competition/New_coder_summer_5/4.cpp
        code/competition/New_coder_summer_5/5.cpp
        code/competition/New_coder_summer_5/6.cpp
        code/competition/New_coder_summer_6/1.cpp
        code/competition/New_coder_summer_6/2.cpp
        code/competition/New_coder_summer_6/3.cpp
        code/competition/New_coder_summer_6/4.cpp
        code/competition/New_coder_summer_6/5.cpp
        code/competition/New_coder_summer_6/6.cpp
        code/competition/New_coder_summer_6/7.cpp
        code/competition/New_coder_summer_7/1.cpp
        code/competition/New_coder_summer_7/2.cpp
        code/competition/New_coder_summer_7/3.cpp
        code/competition/New_coder_summer_7/4.cpp
        code/competition/New_coder_summer_7/5.cpp
        code/competition/New_coder_summer_7/6.cpp
        code/competition/New_coder_summer_7/7.cpp
        code/competition/New_coder_summer_7/7ans.cpp
        code/competition/New_coder_summer_7/C.cpp
        code/competition/New_coder_summer_8/1.cpp
        code/competition/New_coder_summer_8/2.cpp
        code/competition/new_coder_top1/1.cpp
        code/competition/new_coder_top1/2.cpp
        code/competition/new_coder_top1/3.cpp
        code/competition/Newcoder_round_68/1.cpp
        code/competition/Newcoder_round_68/2.cpp
        code/competition/Newcoder_round_68/3.cpp
        code/competition/Newcoder_summer_1/1.cpp
        code/competition/Newcoder_summer_1/10.cpp
        code/competition/Newcoder_summer_1/11.cpp
        code/competition/Newcoder_summer_1/12.cpp
        code/competition/Newcoder_summer_1/2.cpp
        code/competition/Newcoder_summer_1/3.cpp
        code/competition/Newcoder_summer_1/4.cpp
        code/competition/Newcoder_summer_1/5.cpp
        code/competition/Newcoder_summer_1/6.cpp
        code/competition/Newcoder_summer_1/7.cpp
        code/competition/Newcoder_summer_1/8.cpp
        code/competition/Newcoder_summer_1/9.cpp
        code/competition/Newcoder_summer_2/1.cpp
        code/competition/Newcoder_summer_2/10.cpp
        code/competition/Newcoder_summer_2/11.cpp
        code/competition/Newcoder_summer_2/12.cpp
        code/competition/Newcoder_summer_2/2.cpp
        code/competition/Newcoder_summer_2/3.cpp
        code/competition/Newcoder_summer_2/4.cpp
        code/competition/Newcoder_summer_2/5.cpp
        code/competition/Newcoder_summer_2/6.cpp
        code/competition/Newcoder_summer_2/7.cpp
        code/competition/Newcoder_summer_2/8.cpp
        code/competition/Newcoder_summer_2/9.cpp
        code/competition/Newcoder_summer_3/1.cpp
        code/competition/Newcoder_summer_3/2.cpp
        code/competition/Newcoder_summer_3/3.cpp
        code/competition/Newcoder_summer_3/4.cpp
        code/competition/Newcoder_summer_3/5.cpp
        code/competition/Newcoder_summer_3/6.cpp
        code/competition/Newcoder_summer_3/7.cpp
        code/competition/Newcoder_summer_3/8.cpp
        code/competition/Newcoder_summer_3/9.cpp
        code/competition/newcoderzzl_15/1.cpp
        code/competition/newcoderzzl_15/2.cpp
        code/competition/newcoderzzl_15/3.cpp
        code/competition/niuke1/1.cpp
        code/competition/niuke1/2.cpp
        code/competition/niuke1/3.cpp
        code/competition/niuke1/4.cpp
        code/competition/niuke1/5.cpp
        code/competition/niuke1/6.cpp
        code/competition/niuke1/7.cpp
        code/competition/niuke1/8.cpp
        code/competition/niuke1/9.cpp
        code/competition/niuke10/1.cpp
        code/competition/niuke10/2.cpp
        code/competition/niuke10/3.cpp
        code/competition/niuke10/4.cpp
        code/competition/niuke10/5.cpp
        code/competition/niuke10/6.cpp
        code/competition/niuke2/1.cpp
        code/competition/niuke2/10.cpp
        code/competition/niuke2/2.cpp
        code/competition/niuke2/3.cpp
        code/competition/niuke2/4.cpp
        code/competition/niuke2/5.cpp
        code/competition/niuke2/6.cpp
        code/competition/niuke2/7.cpp
        code/competition/niuke2/8.cpp
        code/competition/niuke2/9.cpp
        code/competition/niuke3/1.cpp
        code/competition/niuke3/2.cpp
        code/competition/niuke3/3.cpp
        code/competition/niuke3/4.cpp
        code/competition/niuke3/5.cpp
        code/competition/niuke3/6.cpp
        code/competition/niuke3/7.cpp
        code/competition/niuke4/1.cpp
        code/competition/niuke4/2.cpp
        code/competition/niuke4/3.cpp
        code/competition/niuke4/4.cpp
        code/competition/niuke4/5.cpp
        code/competition/niuke4/6.cpp
        code/competition/niuke6/1.cpp
        code/competition/niuke6/2.cpp
        code/competition/niuke6/3.cpp
        code/competition/niuke6/4.cpp
        code/competition/niuke6/5.cpp
        code/competition/niuke7/1.cpp
        code/competition/niuke7/2.cpp
        code/competition/niuke7/3.cpp
        code/competition/niuke7/4.cpp
        code/competition/niuke7/5.cpp
        code/competition/niuke7/6.cpp
        code/competition/niuke8/1.cpp
        code/competition/niuke8/2.cpp
        code/competition/niuke8/3.cpp
        code/competition/niuke8/4.cpp
        code/competition/niuke8/5.cpp
        code/competition/niuke9/1.cpp
        code/competition/niuke9/2.cpp
        code/competition/niuke9/3.cpp
        code/competition/niuke9/4.cpp
        code/competition/niuke9/5.cpp
        code/competition/niuke9/6.cpp
        code/competition/nodecoder_2_19/1.cpp
        code/competition/nodecoder_2_19/2.cpp
        code/competition/nodecoder_2_19/3.cpp
        code/competition/nodecoder_2_19/4.cpp
        code/competition/nodecoder_2_19/5.cpp
        code/competition/nodecoder_2_19/6.cpp
        code/competition/nonglintianti/1.cpp
        code/competition/nonglintianti/2.cpp
        code/competition/nonglintianti/3.cpp
        code/competition/nonglintianti/4.cpp
        code/competition/nonglintianti/5.cpp
        code/competition/nonglintianti/6.cpp
        code/competition/nonglintianti/7.cpp
        code/competition/Now_coder_summer_8/1.cpp
        code/competition/Now_coder_summer_8/2.cpp
        code/competition/Now_coder_summer_8/3.cpp
        code/competition/Now_coder_summer_8/4.cpp
        "code/competition/Ozon Tech Challenge 2020/1.cpp"
        "code/competition/Ozon Tech Challenge 2020/2.cpp"
        "code/competition/Ozon Tech Challenge 2020/3.cpp"
        "code/competition/Ozon Tech Challenge 2020/4.cpp"
        "code/competition/Ozon Tech Challenge 2020/5.cpp"
        "code/competition/Ozon Tech Challenge 2020/6.cpp"
        "code/competition/Ozon Tech Challenge 2020/tempCodeRunnerFile.cpp"
        code/competition/pta3_1/1.cpp
        code/competition/pta3_1/2.cpp
        code/competition/pta3_1/3.cpp
        code/competition/pta3_1/4.cpp
        code/competition/pta3_1/44ans.cpp
        code/competition/pta3_1/4ans.cpp
        code/competition/pta3_1/5.cpp
        code/competition/pta3_1/6.cpp
        code/competition/pta3_1/tempCodeRunnerFile.cpp
        code/competition/pta_2.1/1.cpp
        code/competition/pta_2.1/10.cpp
        code/competition/pta_2.1/12.cpp
        code/competition/pta_2.1/13.cpp
        code/competition/pta_2.1/14.cpp
        code/competition/pta_2.1/2.cpp
        code/competition/pta_2.1/3.cpp
        code/competition/pta_2.1/4.cpp
        code/competition/pta_2.1/5.cpp
        code/competition/pta_2.1/6.cpp
        code/competition/pta_2.1/7.cpp
        code/competition/pta_2.1/8.cpp
        code/competition/pta_2.1/tempCodeRunnerFile.cpp
        code/competition/pta_2.2/1.cpp
        code/competition/pta_2.2/10.cpp
        code/competition/pta_2.2/11.cpp
        code/competition/pta_2.2/12.cpp
        code/competition/pta_2.2/13.cpp
        code/competition/pta_2.2/2.cpp
        code/competition/pta_2.2/3.cpp
        code/competition/pta_2.2/4.cpp
        code/competition/pta_2.2/5.cpp
        code/competition/pta_2.2/6.cpp
        code/competition/pta_2.2/7.cpp
        code/competition/pta_2.2/8.cpp
        code/competition/pta_2.2/9.cpp
        code/competition/pta_2.3/1.cpp
        code/competition/pta_2.3/10.cpp
        code/competition/pta_2.3/11.cpp
        code/competition/pta_2.3/12.cpp
        code/competition/pta_2.3/13.cpp
        code/competition/pta_2.3/14.cpp
        code/competition/pta_2.3/2.cpp
        code/competition/pta_2.3/3.cpp
        code/competition/pta_2.3/4.cpp
        code/competition/pta_2.3/5.cpp
        code/competition/pta_2.3/6.cpp
        code/competition/pta_2.3/7.cpp
        code/competition/pta_2.3/8.cpp
        code/competition/pta_2.3/9.cpp
        code/competition/pta_2.4/1.cpp
        code/competition/pta_2.4/10.cpp
        code/competition/pta_2.4/11.cpp
        code/competition/pta_2.4/12.cpp
        code/competition/pta_2.4/13.cpp
        code/competition/pta_2.4/14.cpp
        code/competition/pta_2.4/15.cpp
        code/competition/pta_2.4/2.cpp
        code/competition/pta_2.4/3.cpp
        code/competition/pta_2.4/4.cpp
        code/competition/pta_2.4/5.cpp
        code/competition/pta_2.4/6.cpp
        code/competition/pta_2.4/7.cpp
        code/competition/pta_2.4/8.cpp
        code/competition/pta_2.4/9.cpp
        code/competition/pta_2.5/1.cpp
        code/competition/pta_2.5/10.cpp
        code/competition/pta_2.5/11.cpp
        code/competition/pta_2.5/12.cpp
        code/competition/pta_2.5/13.cpp
        code/competition/pta_2.5/14.cpp
        code/competition/pta_2.5/15.cpp
        code/competition/pta_2.5/2.cpp
        code/competition/pta_2.5/3.cpp
        code/competition/pta_2.5/4.cpp
        code/competition/pta_2.5/5.cpp
        code/competition/pta_2.5/6.cpp
        code/competition/pta_2.5/7.cpp
        code/competition/pta_2.5/8.cpp
        code/competition/pta_2.5/9.cpp
        code/competition/pta_2.5/tempCodeRunnerFile.cpp
        code/competition/pta_2.6/1.cpp
        code/competition/pta_2.6/10.cpp
        code/competition/pta_2.6/11.cpp
        code/competition/pta_2.6/12.cpp
        code/competition/pta_2.6/13.cpp
        code/competition/pta_2.6/14.cpp
        code/competition/pta_2.6/15.cpp
        code/competition/pta_2.6/2.cpp
        code/competition/pta_2.6/3.cpp
        code/competition/pta_2.6/4.cpp
        code/competition/pta_2.6/5.cpp
        code/competition/pta_2.6/6.cpp
        code/competition/pta_2.6/7.cpp
        code/competition/pta_2.6/8.cpp
        code/competition/pta_2.6/9.cpp
        code/competition/pta_2.6/tempCodeRunnerFile.cpp
        code/competition/pta_2.7/1.cpp
        code/competition/pta_2.7/10.cpp
        code/competition/pta_2.7/11.cpp
        code/competition/pta_2.7/12.cpp
        code/competition/pta_2.7/13.cpp
        code/competition/pta_2.7/14.cpp
        code/competition/pta_2.7/15.cpp
        code/competition/pta_2.7/2.cpp
        code/competition/pta_2.7/3.cpp
        code/competition/pta_2.7/4.cpp
        code/competition/pta_2.7/5.cpp
        code/competition/pta_2.7/6.cpp
        code/competition/pta_2.7/7.cpp
        code/competition/pta_2.7/8.cpp
        code/competition/pta_2.7/9.cpp
        code/competition/pta_2.7/tempCodeRunnerFile.cpp
        code/competition/pta_3.15/1.cpp
        code/competition/pta_3.15/2.cpp
        code/competition/pta_3.15/3.cpp
        code/competition/pta_3.15/4.cpp
        code/competition/pta_3.15/5.cpp
        code/competition/pta_3.15/5bu.cpp
        code/competition/pta_3.15/6.cpp
        code/competition/pta_3.15/6bu.cpp
        code/competition/pta_3.15/7.cpp
        code/competition/shenyang/1.cpp
        code/competition/shenyang/2.cpp
        code/competition/shenyang/3.cpp
        code/competition/shenyang/4.cpp
        code/competition/shenyang/5.cpp
        code/competition/shujia1/1.cpp
        code/competition/shujia1/2.cpp
        code/competition/shujia1/3.cpp
        code/competition/shujia1/4.cpp
        code/competition/shujia1/5.cpp
        code/competition/shujia1/6.cpp
        "code/competition/Testing Round #16/1.cpp"
        "code/competition/The 7-th BIT Campus Programming Contest for Junior Grade Group/1.cpp"
        "code/competition/The 7-th BIT Campus Programming Contest for Junior Grade Group/2.cpp"
        "code/competition/The 7-th BIT Campus Programming Contest for Junior Grade Group/3.cpp"
        "code/competition/The 7-th BIT Campus Programming Contest for Junior Grade Group/4.cpp"
        "code/competition/The 7-th BIT Campus Programming Contest for Junior Grade Group/5.cpp"
        code/competition/tongji_5.10/1.cpp
        code/competition/tongji_5.10/2.cpp
        code/competition/tongji_5.10/3.cpp
        code/competition/tongji_5.10/4.cpp
        code/competition/tongji_5.10/5.cpp
        code/competition/tongji_5.10/6.cpp
        code/competition/tongji_5.10/7.cpp
        code/competition/tongji_5.10/8.cpp
        code/competition/vp_10_17/1.cpp
        code/competition/vp_10_17/2.cpp
        code/competition/vp_10_31/1.cpp
        code/competition/vp_10_31/2.cpp
        code/competition/vp_10_31/3.cpp
        code/competition/vp_11_7/B.cpp
        code/competition/vp_11_7/C.cpp
        code/competition/vp_11_7/E.cpp
        code/competition/vp_11_7/I.cpp
        code/competition/vp_11_7/K.cpp
        code/competition/vp_11_7/K2.cpp
        code/competition/vp_11_7/K3.cpp
        code/competition/xiaomi_wangluo/1.cpp
        code/competition/xiaomi_wangluo/2.cpp
        code/competition/xiaomi_wangluo/3.cpp
        code/competition/xiaomi_wangluo/4.cpp
        code/competition/xiaomi_wangluo/5.cpp
        code/competition/xiaomi_wangluo/6.cpp
        code/competition/zhongshan/1.cpp
        code/competition/zhongshan/4.cpp
        code/competition/zhongshan/G.cpp
        code/competition/zhongshan/I.cpp
        code/competition/zucc3_21/1.cpp
        code/competition/zucc3_21/2.cpp
        code/competition/zucc3_21/3.cpp
        code/competition/zucc3_21/4.cpp
        code/competition/zucc3_21/5.cpp
        code/competition/zucc3_21/6.cpp
        code/competition/zucc3_21/7.cpp
        code/competition/zucc3_21/8.cpp
        code/competition/上海理工/1.cpp
        code/competition/上海理工/2.cpp
        code/competition/上海理工/3.cpp
        code/competition/上海理工/4.cpp
        code/competition/牛客IOI周赛18-普及组/1.cpp
        code/competition/牛客IOI周赛18-普及组/2.cpp
        code/competition/牛客IOI周赛18-普及组/3.cpp
        code/competition/牛客IOI周赛18-普及组/4.cpp
        code/competition/牛客IOI周赛18-普及组/5.cpp
        code/competition/牛客小白月赛29/1.cpp
        code/competition/牛客练习赛77/1.cpp
        code/competition/牛客练习赛77/2.cpp
        code/competition/牛客练习赛77/3.cpp
        code/competition/牛客练习赛77/4.cpp
        code/competition/牛客练习赛77/5.cpp
        code/competition/牛客编程巅峰赛S2第2场/1.cpp
        code/competition/牛客编程巅峰赛S2第2场/2.cpp
        code/competition/牛客编程巅峰赛S2第2场/3.cpp
        code/competition/福州大学第十七届程序设计竞赛_重现赛/1.cpp
        code/competition/福州大学第十七届程序设计竞赛_重现赛/2.cpp
        code/competition/福州大学第十七届程序设计竞赛_重现赛/3.cpp
        code/competition/福州大学第十七届程序设计竞赛_重现赛/4.cpp
        code/competition/福州大学第十七届程序设计竞赛_重现赛/7.cpp
        code/competition/福州大学第十七届程序设计竞赛_重现赛/tmp.cpp
        "code/competition/cfmuban(full).cpp"
        code/competition/cfmuban.cpp
        code/hdoj/ACM_steps/section_1/1.cpp
        code/hdoj/ACM_steps/section_1/2.cpp
        code/hdoj/ACM_steps/section_1/3.cpp
        code/hdoj/ACM_steps/section_1/4.cpp
        code/hdoj/ACM_steps/section_1/5.cpp
        code/hdoj/ACM_steps/section_1/6.cpp
        code/hdoj/ACM_steps/section_1/7.cpp
        code/hdoj/ACM_steps/section_1/8.cpp
        code/hdoj/ACM_steps/section_2/1.cpp
        code/hdoj/jixun2019_1/1.cpp
        code/hdoj/jixun2019_1/3.cpp
        code/hdoj/jixun2019_1/4.cpp
        code/hdoj/jixun2019_1/6.cpp
        code/hdoj/1.cpp
        code/hdoj/1000.cpp
        code/hdoj/1001.cpp
        code/hdoj/1002.cpp
        code/hdoj/1003.cpp
        code/hdoj/1004.cpp
        code/hdoj/1005.cpp
        code/hdoj/1006.cpp
        code/hdoj/1007.cpp
        code/hdoj/1008.cpp
        code/hdoj/1009.cpp
        code/hdoj/1010.cpp
        code/hdoj/1011.cpp
        code/hdoj/1012.cpp
        code/hdoj/1013.cpp
        code/hdoj/1014.cpp
        code/hdoj/1015.cpp
        code/hdoj/1016.cpp
        code/hdoj/1025.cpp
        code/hdoj/1028.cpp
        code/hdoj/1035.cpp
        code/hdoj/1040.cpp
        code/hdoj/1045.cpp
        code/hdoj/1045ans.cpp
        code/hdoj/1050.cpp
        code/hdoj/1052.cpp
        code/hdoj/1058.cpp
        code/hdoj/1060.cpp
        code/hdoj/1061.cpp
        code/hdoj/1068.cpp
        code/hdoj/1069.cpp
        code/hdoj/1073.cpp
        code/hdoj/1074.cpp
        code/hdoj/1075.cpp
        code/hdoj/1078.cpp
        code/hdoj/1078before.cpp
        code/hdoj/1083.cpp
        code/hdoj/1085.cpp
        code/hdoj/1086.cpp
        code/hdoj/1087.cpp
        code/hdoj/1108.cpp
        code/hdoj/1114.cpp
        code/hdoj/1142.cpp
        code/hdoj/1150.cpp
        code/hdoj/1151.cpp
        code/hdoj/1157.cpp
        code/hdoj/1159.cpp
        code/hdoj/1160.cpp
        code/hdoj/1166.cpp
        code/hdoj/1166t.cpp
        code/hdoj/1171.cpp
        code/hdoj/1171_2.cpp
        code/hdoj/1172.cpp
        code/hdoj/1175.cpp
        code/hdoj/1175bfs.cpp
        code/hdoj/1176.cpp
        code/hdoj/1180.cpp
        code/hdoj/1208.cpp
        code/hdoj/1217.cpp
        code/hdoj/1217t.cpp
        code/hdoj/1224.cpp
        code/hdoj/1231.cpp
        code/hdoj/1232.cpp
        code/hdoj/1241.cpp
        code/hdoj/1247.cpp
        code/hdoj/1251.cpp
        code/hdoj/1253.cpp
        code/hdoj/1254.cpp
        code/hdoj/1257.cpp
        code/hdoj/1269.cpp
        code/hdoj/1281.cpp
        code/hdoj/1285.cpp
        code/hdoj/1285ans.cpp
        code/hdoj/1286.cpp
        code/hdoj/1298.cpp
        code/hdoj/1298t.cpp
        code/hdoj/1305.cpp
        code/hdoj/1325.cpp
        code/hdoj/1342.cpp
        code/hdoj/1370.cpp
        code/hdoj/1373.cpp
        code/hdoj/1385.cpp
        code/hdoj/1421.cpp
        code/hdoj/1422.cpp
        code/hdoj/1429.cpp
        code/hdoj/1435.cpp
        code/hdoj/1435ans.cpp
        code/hdoj/1498.cpp
        code/hdoj/1505.cpp
        code/hdoj/1506.cpp
        code/hdoj/1507.cpp
        code/hdoj/1507ans.cpp
        code/hdoj/1520.cpp
        code/hdoj/1522.cpp
        code/hdoj/1522hack.cpp
        code/hdoj/1528.cpp
        code/hdoj/1530.cpp
        code/hdoj/1532.cpp
        code/hdoj/1533.cpp
        code/hdoj/1541.cpp
        code/hdoj/1556.cpp
        code/hdoj/1565.cpp
        code/hdoj/1573.cpp
        code/hdoj/1575.cpp
        code/hdoj/1575ans.cpp
        code/hdoj/1619.cpp
        code/hdoj/1671.cpp
        code/hdoj/1698.cpp
        code/hdoj/1710.cpp
        code/hdoj/1711.cpp
        code/hdoj/1713.cpp
        code/hdoj/1722.cpp
        code/hdoj/1728.cpp
        code/hdoj/1754.cpp
        code/hdoj/1757.cpp
        code/hdoj/1789.cpp
        code/hdoj/1827.cpp
        code/hdoj/1846.cpp
        code/hdoj/1847.cpp
        code/hdoj/1864.cpp
        code/hdoj/1869.cpp
        code/hdoj/1874.cpp
        code/hdoj/1892.cpp
        code/hdoj/1914.cpp
        code/hdoj/1977.cpp
        code/hdoj/1978.cpp
        code/hdoj/2000.cpp
        code/hdoj/2001.cpp
        code/hdoj/2002.cpp
        code/hdoj/2003.cpp
        code/hdoj/2004.cpp
        code/hdoj/2005.cpp
        code/hdoj/2006.cpp
        code/hdoj/2007.cpp
        code/hdoj/2008.cpp
        code/hdoj/2009.cpp
        code/hdoj/2011.cpp
        code/hdoj/2012.cpp
        code/hdoj/2013.cpp
        code/hdoj/2015.cpp
        code/hdoj/2016.cpp
        code/hdoj/2017.cpp
        code/hdoj/2018.cpp
        code/hdoj/2019.cpp
        code/hdoj/2020.cpp
        code/hdoj/2023.cpp
        code/hdoj/2024.cpp
        code/hdoj/2025.cpp
        code/hdoj/2026.cpp
        code/hdoj/2027.cpp
        code/hdoj/2028.cpp
        code/hdoj/2029.cpp
        code/hdoj/2030.cpp
        code/hdoj/2031.cpp
        code/hdoj/2032.cpp
        code/hdoj/2033.cpp
        code/hdoj/2034.cpp
        code/hdoj/2035.cpp
        code/hdoj/2036.cpp
        code/hdoj/2037.cpp
        code/hdoj/2039.cpp
        code/hdoj/2040.cpp
        code/hdoj/2041.cpp
        code/hdoj/2042.cpp
        code/hdoj/2043.cpp
        code/hdoj/2044.cpp
        code/hdoj/2045.cpp
        code/hdoj/2046.cpp
        code/hdoj/2048.cpp
        code/hdoj/2049.cpp
        code/hdoj/2050.cpp
        code/hdoj/2051.cpp
        code/hdoj/2053.cpp
        code/hdoj/2054.cpp
        code/hdoj/2055.cpp
        code/hdoj/2056.cpp
        code/hdoj/2063.cpp
        code/hdoj/2066.cpp
        code/hdoj/2072.cpp
        code/hdoj/2078.cpp
        code/hdoj/2079.cpp
        code/hdoj/2081.cpp
        code/hdoj/2084.cpp
        code/hdoj/2088.cpp
        code/hdoj/2091.cpp
        code/hdoj/2094.cpp
        code/hdoj/2095.cpp
        code/hdoj/2107.cpp
        code/hdoj/2108.cpp
        code/hdoj/2108t.cpp
        code/hdoj/2109.cpp
        code/hdoj/2112.cpp
        code/hdoj/2112dij.cpp
        code/hdoj/2138.cpp
        code/hdoj/2141.cpp
        code/hdoj/2147.cpp
        code/hdoj/2187.cpp
        code/hdoj/2190.cpp
        code/hdoj/2191.cpp
        code/hdoj/2196.cpp
        code/hdoj/2242.cpp
        code/hdoj/2317.cpp
        code/hdoj/2399.cpp
        code/hdoj/2454.cpp
        code/hdoj/2501.cpp
        code/hdoj/2504.cpp
        code/hdoj/2519.cpp
        code/hdoj/2544.cpp
        code/hdoj/2544floyd.cpp
        code/hdoj/2560.cpp
        code/hdoj/2571.cpp
        code/hdoj/2585.cpp
        code/hdoj/2586.cpp
        code/hdoj/2602.cpp
        code/hdoj/2604.cpp
        code/hdoj/2660.cpp
        code/hdoj/2680.cpp
        code/hdoj/2709.cpp
        code/hdoj/2722.cpp
        code/hdoj/2732.cpp
        code/hdoj/2767.cpp
        code/hdoj/2846.cpp
        code/hdoj/2874.cpp
        code/hdoj/2883.cpp
        code/hdoj/2923.cpp
        code/hdoj/2955.cpp
        code/hdoj/3072.cpp
        code/hdoj/3079.cpp
        code/hdoj/3182.cpp
        code/hdoj/3308.cpp
        code/hdoj/3339.cpp
        code/hdoj/3460.cpp
        code/hdoj/3460t.cpp
        code/hdoj/3486.cpp
        code/hdoj/3486ans.cpp
        code/hdoj/3549.cpp
        code/hdoj/3549dinic.cpp
        code/hdoj/3555.cpp
        code/hdoj/3555ans.cpp
        code/hdoj/3563.cpp
        code/hdoj/3572.cpp
        code/hdoj/3585.cpp
        code/hdoj/3585ans.cpp
        code/hdoj/3639.cpp
        code/hdoj/3652.cpp
        code/hdoj/3709.cpp
        code/hdoj/3743.cpp
        code/hdoj/3790.cpp
        code/hdoj/3791.cpp
        code/hdoj/3836.cpp
        code/hdoj/3853.cpp
        code/hdoj/3861.cpp
        code/hdoj/3996.cpp
        code/hdoj/3999.cpp
        code/hdoj/4213.cpp
        code/hdoj/4267.cpp
        code/hdoj/4352.cpp
        code/hdoj/4358.cpp
        code/hdoj/4358ans.cpp
        code/hdoj/4358mo.cpp
        code/hdoj/4358tijie.cpp
        code/hdoj/4366.cpp
        code/hdoj/4507.cpp
        code/hdoj/4507ans.cpp
        code/hdoj/4540.cpp
        code/hdoj/4547.cpp
        code/hdoj/4597.cpp
        code/hdoj/4734.cpp
        code/hdoj/5044.cpp
        code/hdoj/5044ans.cpp
        code/hdoj/5179.cpp
        code/hdoj/5274.cpp
        code/hdoj/5418.cpp
        code/hdoj/5418ans.cpp
        code/hdoj/5443.cpp
        code/hdoj/5691.cpp
        code/hdoj/5711.cpp
        code/hdoj/5726.cpp
        code/hdoj/5726ans.cpp
        code/hdoj/6406.cpp
        code/hdoj/6406ans.cpp
        code/hdoj/6471.cpp
        code/hdoj/6472.cpp
        code/hdoj/6473.cpp
        code/hdoj/6474.cpp
        code/hdoj/6475.cpp
        code/hdoj/6476.cpp
        code/hdoj/6479.cpp
        code/hdoj/6759.cpp
        code/hdoj/6797.cpp
        code/hdoj/6807.cpp
        code/hdoj/6853.cpp
        code/hdoj/6856.cpp
        code/hdoj/6873.cpp
        code/hdoj/6873ans.cpp
        code/hdoj/6873std.cpp
        code/hdoj/6889.cpp
        code/hdoj/6897.cpp
        code/hdoj/6951.cpp
        code/hdoj/6959.cpp
        code/hdoj/6982.cpp
        code/hdoj/7059.cpp
        code/hdoj/7134.cpp
        code/hdoj/AT1717.cpp
        code/hdoj/jixun-3-1001.cpp
        code/hdoj/jixun-3-1003.cpp
        code/hdoj/jixun-3-1003t.cpp
        code/hdoj/t.cpp
        code/hdoj/tempCodeRunnerFile.cpp
        code/homeworks/10.1/1.cpp
        code/homeworks/10.1/2.cpp
        code/homeworks/10.1/3.cpp
        code/homeworks/10.1/4.cpp
        code/homeworks/10.1/5.cpp
        code/homeworks/10.1/6.cpp
        code/homeworks/10.1/7.cpp
        code/homeworks/10.1/8.cpp
        code/homeworks/10.1/tempCodeRunnerFile.cpp
        code/homeworks/10.12/1.cpp
        code/homeworks/10.12/2.cpp
        code/homeworks/10.12/3.cpp
        code/homeworks/10.12/4.cpp
        code/homeworks/10.12/5.cpp
        code/homeworks/10.12/6.cpp
        code/homeworks/10.12/tempCodeRunnerFile.cpp
        code/homeworks/10.21/1.cpp
        code/homeworks/10.21/2.cpp
        code/homeworks/10.21/3.cpp
        code/homeworks/10.21/4.cpp
        code/homeworks/10.21/5.cpp
        code/homeworks/10.21/7.cpp
        code/homeworks/10.21/t.cpp
        code/homeworks/10.21/tempCodeRunnerFile.cpp
        code/homeworks/11.15/1.cpp
        code/homeworks/11.15/2.cpp
        code/homeworks/11.15/3.cpp
        code/homeworks/11.15/4.cpp
        code/homeworks/acmlesson1/1.cpp
        code/homeworks/acmlesson1/2.cpp
        code/homeworks/acmlesson1/3.cpp
        code/homeworks/acmlesson1/5.cpp
        code/homeworks/acmlesson1/6.cpp
        code/homeworks/acmlesson14/1.cpp
        code/homeworks/acmlesson14/2.cpp
        code/homeworks/acmlesson7/1.cpp
        code/homeworks/acmlesson7/2.cpp
        code/homeworks/acmlesson7/3.cpp
        code/homeworks/acmlesson7/tempCodeRunnerFile.cpp
        code/homeworks/acmlessons11/1.cpp
        code/homeworks/acmlessons9/1.cpp
        code/homeworks/acmlessons9/3.cpp
        code/homeworks/algorlithm/homework_1/1.cpp
        code/homeworks/algorlithm/zuoye_2/1.cpp
        code/homeworks/algorlithm/zuoye_2/2.cpp
        code/homeworks/algorlithm/zuoye_2/3.cpp
        code/homeworks/algorlithm/1.cpp
        code/homeworks/algorlithm/2.cpp
        code/homeworks/c/1.c
        code/homeworks/c/12.cpp
        code/homeworks/c/2.c
        code/homeworks/c/3.c
        code/homeworks/c/4.c
        code/homeworks/c/5.c
        code/homeworks/c/6.c
        code/homeworks/c/7.c
        code/homeworks/c/8.c
        code/homeworks/C_program_design/1_1.cpp
        code/homeworks/C_program_design/1_2.cpp
        code/homeworks/C_program_design/1_3.cpp
        code/homeworks/C_program_design/1_4.cpp
        code/homeworks/C_program_design/1_5.cpp
        code/homeworks/C_program_design/2.cpp
        code/homeworks/C_program_design/2_1.cpp
        code/homeworks/C_program_design/2_2.cpp
        code/homeworks/C_program_design/2_3.cpp
        code/homeworks/C_program_design/2_4.cpp
        code/homeworks/C_program_design/2_5.cpp
        code/homeworks/C_program_design/3_1.cpp
        code/homeworks/C_program_design/3_2.cpp
        code/homeworks/C_program_design/3_3.cpp
        code/homeworks/C_program_design/4_1.cpp
        code/homeworks/C_program_design/5_1.cpp
        code/homeworks/C_program_design/link_list.cpp
        code/homeworks/compile/1.cpp
        code/homeworks/compile/2.cpp
        code/homeworks/compile/3.cpp
        code/homeworks/cpphoilday/10/1.cpp
        code/homeworks/cpphoilday/11/1.cpp
        code/homeworks/cpphoilday/11/yang.cpp
        code/homeworks/cpphoilday/12/1.cpp
        code/homeworks/cpphoilday/12/2.cpp
        code/homeworks/cpphoilday/13/1.cpp
        code/homeworks/cpphoilday/13/2.cpp
        code/homeworks/cpphoilday/13/2_new.cpp
        code/homeworks/cpphoilday/2/date.cpp
        code/homeworks/cpphoilday/2/main.cpp
        code/homeworks/cpphoilday/3/1.cpp
        code/homeworks/cpphoilday/3/2.cpp
        code/homeworks/cpphoilday/4/1.cpp
        code/homeworks/cpphoilday/4/2.cpp
        code/homeworks/cpphoilday/5/1.cpp
        code/homeworks/cpphoilday/5/2.cpp
        code/homeworks/cpphoilday/6/1.cpp
        code/homeworks/cpphoilday/6/2.cpp
        code/homeworks/cpphoilday/6/3.cpp
        code/homeworks/cpphoilday/6/test.cpp
        code/homeworks/cpphoilday/7/1.cpp
        code/homeworks/cpphoilday/7/2.cpp
        code/homeworks/cpphoilday/8/1.cpp
        code/homeworks/cpphoilday/8/2.cpp
        code/homeworks/cpphoilday/8/3.cpp
        code/homeworks/cpphoilday/9/1.cpp
        code/homeworks/cpphoilday/1.cpp
        code/homeworks/cpphoilday/tempCodeRunnerFile.cpp
        code/homeworks/cpphoilday/test.cpp
        code/homeworks/Date_Struct/1.cpp
        code/homeworks/Date_Struct/1_table.cpp
        code/homeworks/Date_Struct/2.cpp
        code/homeworks/Date_Struct/3.cpp
        code/homeworks/Date_Struct/4.cpp
        code/homeworks/dianzikexie/1.c
        code/homeworks/dianzikexie/2.c
        code/homeworks/dianzikexie/3.c
        code/homeworks/dianzikexie/t.c
        code/homeworks/dianzikexie/tempCodeRunnerFile.c
        "code/homeworks/discrete mathematics/1.cpp"
        code/homeworks/fuhuaqi/1.c
        code/homeworks/fuhuaqi/2.c
        code/homeworks/fuhuaqi/3.c
        code/homeworks/fuhuaqi/4.c
        code/homeworks/helpxjh/1.cpp
        code/homeworks/helpxjh/2.cpp
        code/homeworks/helpxjh/3.cpp
        code/homeworks/helpxjh/4.cpp
        code/homeworks/helpxjh/5.2.cpp
        code/homeworks/helpxjh/ks.cpp
        code/homeworks/helpxjh/new.cpp
        code/homeworks/jindaishi/t.cpp
        code/homeworks/OS/1.cpp
        code/homeworks/OS/1ans.cpp
        code/homeworks/OS/1stl.cpp
        code/homeworks/OS/test_back.c
        "code/homeworks/Principle of Computer Organization/2/1.cpp"
        "code/homeworks/Principle of Computer Organization/2/2.cpp"
        "code/homeworks/Principle of Computer Organization/2/3.cpp"
        "code/homeworks/Principle of Computer Organization/2/4.cpp"
        "code/homeworks/Principle of Computer Organization/2/5.cpp"
        "code/homeworks/Principle of Computer Organization/2/6.cpp"
        "code/homeworks/Principle of Computer Organization/2/7.cpp"
        "code/homeworks/Principle of Computer Organization/1.cpp"
        "code/homeworks/Principle of Computer Organization/2.cpp"
        "code/homeworks/Principle of Computer Organization/3.cpp"
        "code/homeworks/Signal and circuit system/check.m"
        "code/homeworks/Signal and circuit system/main.m"
        "code/homeworks/Signal and circuit system/yuejie.m"
        code/homeworks/The_introduction_of_algorithms/BELLMAN_FORD.cpp
        code/homeworks/The_introduction_of_algorithms/BFS.cpp
        code/homeworks/The_introduction_of_algorithms/BLACK_RED_TREE.cpp
        code/homeworks/The_introduction_of_algorithms/BOTTOM_UP_CUT_ROD.cpp
        code/homeworks/The_introduction_of_algorithms/CONTING_SORT.cpp
        code/homeworks/The_introduction_of_algorithms/CUT-ROD.cpp
        code/homeworks/The_introduction_of_algorithms/DFS.cpp
        code/homeworks/The_introduction_of_algorithms/Dijkstra.cpp
        code/homeworks/The_introduction_of_algorithms/EDMOND_KRAP.cpp
        code/homeworks/The_introduction_of_algorithms/FIND_MAXIMUM_SUBARRAY.cpp
        code/homeworks/The_introduction_of_algorithms/Floyd-Walshall.cpp
        code/homeworks/The_introduction_of_algorithms/HEAPSORT.cpp
        code/homeworks/The_introduction_of_algorithms/INSERTION_SORT.cpp
        code/homeworks/The_introduction_of_algorithms/KRUSKAL.cpp
        code/homeworks/The_introduction_of_algorithms/MERGE_SORT.cpp
        code/homeworks/The_introduction_of_algorithms/QUICKSORT.cpp
        code/homeworks/The_introduction_of_algorithms/RADIX_SORT.cpp
        code/homeworks/The_introduction_of_algorithms/RADIX_SORT16.cpp
        code/homeworks/The_introduction_of_algorithms/RANDOMIZED_QUICKSORT.cpp
        code/homeworks/The_introduction_of_algorithms/STLSORT.cpp
        code/homeworks/The_introduction_of_algorithms/threadtest.cpp
        code/homeworks/The_introduction_of_algorithms/treadtest.cpp
        code/homeworks/t.cpp
        code/jisuanke/1.cpp
        code/luogu/1002.cpp
        code/luogu/1005.cpp
        code/luogu/1009.cpp
        code/luogu/1018.cpp
        code/luogu/1020.cpp
        code/luogu/1029.cpp
        code/luogu/1040.cpp
        code/luogu/1049.cpp
        code/luogu/1056.cpp
        code/luogu/1063.cpp
        code/luogu/1067.cpp
        code/luogu/1077.cpp
        code/luogu/1080.cpp
        code/luogu/1082.cpp
        code/luogu/1083.cpp
        code/luogu/1102.cpp
        code/luogu/1104.cpp
        code/luogu/1122.cpp
        code/luogu/1144.cpp
        code/luogu/1160.cpp
        code/luogu/1164.cpp
        code/luogu/1184.cpp
        code/luogu/1199.cpp
        code/luogu/1208.cpp
        code/luogu/1216.cpp
        code/luogu/1219.cpp
        code/luogu/1220.cpp
        code/luogu/1223.cpp
        code/luogu/1233.cpp
        code/luogu/1249.cpp
        code/luogu/1251.cpp
        code/luogu/1256.cpp
        code/luogu/1273.cpp
        code/luogu/1280.cpp
        code/luogu/1305.cpp
        code/luogu/1339.cpp
        code/luogu/1352.cpp
        code/luogu/1361.cpp
        code/luogu/1379.cpp
        code/luogu/1439.cpp
        code/luogu/1494.cpp
        code/luogu/1495.cpp
        code/luogu/1514.cpp
        code/luogu/1514ans.cpp
        code/luogu/1613.cpp
        code/luogu/1618.cpp
        code/luogu/1629.cpp
        code/luogu/1654.cpp
        code/luogu/1802.cpp
        code/luogu/1849.cpp
        code/luogu/1850.cpp
        code/luogu/1850ans.cpp
        code/luogu/1880.cpp
        code/luogu/1886.cpp
        code/luogu/1886set.cpp
        code/luogu/1890.cpp
        code/luogu/1903.cpp
        code/luogu/1919.cpp
        code/luogu/1919ans.cpp
        code/luogu/1939.cpp
        code/luogu/1941.cpp
        code/luogu/1994.cpp
        code/luogu/2014.cpp
        code/luogu/2015.cpp
        code/luogu/2095.cpp
        code/luogu/2158.cpp
        code/luogu/2196.cpp
        code/luogu/2249.cpp
        code/luogu/2252.cpp
        code/luogu/2261.cpp
        code/luogu/2325.cpp
        code/luogu/2325ans.cpp
        code/luogu/2487.cpp
        code/luogu/2522.cpp
        code/luogu/2656.cpp
        code/luogu/2671.cpp
        code/luogu/2671ans.cpp
        code/luogu/2709.cpp
        code/luogu/2754.cpp
        code/luogu/2756.cpp
        code/luogu/2758.cpp
        code/luogu/2761.cpp
        code/luogu/3034.cpp
        code/luogu/3041.cpp
        code/luogu/3054.cpp
        code/luogu/3115.cpp
        code/luogu/3116.cpp
        code/luogu/3119.cpp
        code/luogu/3123.cpp
        code/luogu/3126.cpp
        code/luogu/3127.cpp
        code/luogu/3146.cpp
        code/luogu/3172.cpp
        code/luogu/3205.cpp
        code/luogu/3338.cpp
        code/luogu/3366prim.cpp
        code/luogu/3367zhi.cpp
        code/luogu/3368.cpp
        code/luogu/3369.cpp
        code/luogu/3369ans.cpp
        code/luogu/3369spl.cpp
        code/luogu/3369stl.cpp
        code/luogu/3369treap.cpp
        code/luogu/3370.cpp
        code/luogu/3371.cpp
        code/luogu/3371spfa.cpp
        code/luogu/3372.cpp
        code/luogu/3372t.cpp
        code/luogu/3373.cpp
        code/luogu/3374.cpp
        code/luogu/3375.cpp
        code/luogu/3376.cpp
        code/luogu/3377.cpp
        code/luogu/3380.cpp
        code/luogu/3381.cpp
        code/luogu/3382.cpp
        code/luogu/3382SA.cpp
        code/luogu/3383.cpp
        code/luogu/3384.cpp
        code/luogu/3385.cpp
        code/luogu/3386.cpp
        code/luogu/3387.cpp
        code/luogu/3388.cpp
        code/luogu/3389.cpp
        code/luogu/3390.cpp
        code/luogu/3391.cpp
        code/luogu/3402.cpp
        code/luogu/3455.cpp
        code/luogu/3690.cpp
        code/luogu/3723.cpp
        code/luogu/3803.cpp
        code/luogu/3803fft.cpp
        code/luogu/3803ntt.cpp
        code/luogu/3806.cpp
        code/luogu/3808.cpp
        code/luogu/3810.cpp
        code/luogu/3810ans.cpp
        code/luogu/3811.cpp
        code/luogu/3812.cpp
        code/luogu/3834.cpp
        code/luogu/3853.cpp
        code/luogu/3865.cpp
        code/luogu/3901.cpp
        code/luogu/3919.cpp
        code/luogu/3958.cpp
        code/luogu/4014.cpp
        code/luogu/4017.cpp
        code/luogu/4137.cpp
        code/luogu/4148.cpp
        code/luogu/4148ans.cpp
        code/luogu/4170.cpp
        code/luogu/4213.cpp
        code/luogu/4343.cpp
        code/luogu/4550.cpp
        code/luogu/4717.cpp
        code/luogu/4717tt.cpp
        code/luogu/4768.cpp
        code/luogu/4777.cpp
        code/luogu/4777ans.cpp
        code/luogu/4779.cpp
        code/luogu/4933.cpp
        code/luogu/4942.cpp
        code/luogu/4995.cpp
        code/luogu/5091.cpp
        code/luogu/5095.cpp
        code/luogu/5117.cpp
        code/luogu/5118.cpp
        code/luogu/5120.cpp
        code/luogu/5121.cpp
        code/luogu/5122.cpp
        code/luogu/5123.cpp
        code/luogu/5123ans.cpp
        code/luogu/5197.cpp
        code/luogu/5198.cpp
        code/luogu/5199.cpp
        code/luogu/5201.cpp
        code/luogu/5367.cpp
        code/luogu/5490.cpp
        code/luogu/5541.cpp
        code/luogu/5542.cpp
        code/luogu/5560.cpp
        code/luogu/5656.cpp
        code/luogu/5656ans.cpp
        code/luogu/5788.cpp
        code/luogu/6136.cpp
        code/luogu/6685.cpp
        code/luogu/CF448C.cpp
        code/luogu/CF607B.cpp
        code/luogu/CF750D.cpp
        code/luogu/cf896C.cpp
        code/luogu/CF979C.cpp
        code/luogu/daxian.cpp
        code/luogu/fzh1.cpp
        code/luogu/helplhy.cpp
        code/luogu/helplhy2.c
        code/luogu/helplhy3.c
        code/luogu/helplhy4.c
        code/luogu/p1000.cpp
        code/luogu/p1001.cpp
        code/luogu/p1003.cpp
        code/luogu/p1008.cpp
        code/luogu/p1022.cpp
        code/luogu/p1028.cpp
        code/luogu/p1035.cpp
        code/luogu/p1036.cpp
        code/luogu/p1042.cpp
        code/luogu/p1044.cpp
        code/luogu/p1046.cpp
        code/luogu/p1047.cpp
        code/luogu/p1048.cpp
        code/luogu/p1048t.cpp
        code/luogu/p1049.cpp
        code/luogu/p1055.cpp
        code/luogu/p1059.cpp
        code/luogu/p1067.cpp
        code/luogu/p1068.cpp
        code/luogu/p1085.cpp
        code/luogu/p1089.cpp
        code/luogu/p1090.cpp
        code/luogu/p1149.cpp
        code/luogu/p1177.cpp
        code/luogu/p1181.cpp
        code/luogu/p1200.cpp
        code/luogu/p1208.cpp
        code/luogu/p1219.cpp
        code/luogu/p1307.cpp
        code/luogu/p1308.cpp
        code/luogu/p1319.cpp
        code/luogu/p1421.cpp
        code/luogu/p1422.cpp
        code/luogu/p1423.cpp
        code/luogu/p1424.cpp
        code/luogu/p1425.cpp
        code/luogu/p1426.cpp
        code/luogu/p1427.cpp
        code/luogu/p1428.cpp
        code/luogu/p1478.cpp
        code/luogu/p1540.cpp
        code/luogu/p1553.cpp
        code/luogu/p1553new.cpp
        code/luogu/p1567.cpp
        code/luogu/p1598.cpp
        code/luogu/p1618.cpp
        code/luogu/p1652.cpp
        code/luogu/p1757.cpp
        code/luogu/p1833.cpp
        code/luogu/p1855.cpp
        code/luogu/p1880.cpp
        code/luogu/p1909.cpp
        code/luogu/p1914.cpp
        code/luogu/p1980.cpp
        code/luogu/p2084.cpp
        code/luogu/p2089.cpp
        code/luogu/p2141.cpp
        code/luogu/p2330.cpp
        code/luogu/p2330v2.cpp
        code/luogu/p2785.cpp
        code/luogu/p3370.cpp
        code/luogu/p3374.cpp
        code/luogu/RED_Black_tree.cpp
        code/luogu/SP26045.cpp
        code/luogu/SP5971.cpp
        code/luogu/splay.cpp
        code/luogu/t.cpp
        code/luogu/tempCodeRunnerFile.c
        code/luogu/tempCodeRunnerFile.cpp
        code/luogu/uva10305.cpp
        code/newcoder/1.cpp
        code/newcoder/2.cpp
        code/newcoder/3.cpp
        code/newcoder/5758E.cpp
        code/newcoder/5758F.cpp
        code/newcoder/6182_c.cpp
        code/newcoder/6_27_A.cpp
        code/newcoder/7152D.cpp
        code/newcoder/contest_7225_A.cpp
        code/newcoder/cow.cpp
        code/newcoder/jiedai.cpp
        "code/newcoder/red _bao_qiwang.cpp"
        code/newcoder/t.cpp
        code/newcoder/Taeyeon_is_confusing.cpp
        code/newcoder/tempCodeRunnerFile.cpp
        code/newcoder/tt.cpp
        code/newcoder/warter.cpp
        code/PAT_top/1001.cpp
        code/PAT_top/1002.cpp
        code/poj/1419.cpp
        code/poj/1451.cpp
        code/poj/1852.cpp
        code/poj/1990.cpp
        code/poj/2096.cpp
        code/poj/2155.cpp
        code/poj/2186.cpp
        code/poj/2386.cpp
        code/poj/2431.cpp
        code/poj/2777.cpp
        code/poj/2989.cpp
        code/poj/2989self.cpp
        code/poj/2989t.cpp
        code/poj/3114.cpp
        code/poj/3667.cpp
        code/poj/3667ans.cpp
        code/poj/3682.cpp
        code/poj/t.cpp
        code/poj/tempCodeRunnerFile.cpp
        code/PTA/1.cpp
        code/PTA/10.cpp
        code/PTA/11.cpp
        code/PTA/12.cpp
        code/PTA/13.cpp
        code/PTA/15.cpp
        code/PTA/16.cpp
        code/PTA/17.cpp
        code/PTA/18.cpp
        code/PTA/19.cpp
        code/PTA/2.cpp
        code/PTA/20.cpp
        code/PTA/21.cpp
        code/PTA/22.cpp
        code/PTA/23.cpp
        code/PTA/24.cpp
        code/PTA/25.cpp
        code/PTA/3.cpp
        code/PTA/4.cpp
        code/PTA/5.cpp
        code/PTA/6.cpp
        code/PTA/7.1.cpp
        code/PTA/7.2.cpp
        code/PTA/7.3.cpp
        code/PTA/7.4.cpp
        code/PTA/7.5.cpp
        code/PTA/7.cpp
        code/PTA/8.cpp
        code/PTA/9.cpp
        code/PTA/A+B_in_Hogwarts.cpp
        code/PTA/helloworld.cpp
        code/PTA/L2-001.cpp
        code/PTA/L2_002.cpp
        code/PTA/Strack.cpp
        code/PTA/The_Largest_Generation.cpp
        code/Test/pai.sh
        code/Test/tmp.in
        code/Test/tmp.out
        code/Test/tmp2.out
        code/tmp/1.cpp
        code/tmp/in.txt
        code/tmp/test.py
        code/1.txt
        "code/ACM模板 by Rand0w.md"
        BTRS.key
        clear.bat
        LICENSE
        push
        push.bat
        push.sh
        "README 2.md"
        README.md)
