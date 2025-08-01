<h2><a href="https://www.geeksforgeeks.org/problems/search-query-for-strings5049/1?page=1&category=Trie&sortBy=difficulty">Search Query for Strings</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">Trie is an efficient information retrieval data structure. Use this data structure to store strings and search strings. In this problem, you are given an array of strings (consisting of lowercase characters) <strong>arr</strong>[] of size <strong>N</strong>. Also, you will be given some queries <strong>Q</strong> and for each query a string is given and your task is to check if the given string is in the string array or not.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> <strong>Each word</strong> in the array of string can be of size <strong>10<sup>3</sup></strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">N = 8, Q = 3
words[] = {the,a,there,answer,any,by,bye
their}
Queries[] = {the,an,any}
<strong>Output:
</strong>1
0
1<strong>
Explanation: </strong>After inserting words in the
array,all the words will be stored. Now
searching for the will result in 1
(present), an will resultin 0(not present)
and any will result in 1 (present).</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete <strong>insert </strong>and <strong>search,&nbsp;</strong>return <strong>true</strong>&nbsp;if the given string is present in the TRIE, else <strong>false</strong> in search function.&nbsp; 1 is printed by the driver's code if the value returned is true, 0 otherwise.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N).<br>N = length of the string</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>3</sup><br>1 &lt;= Q &lt;= 10<sup>3</sup></span></p>
<p>&nbsp;</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Trie</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;