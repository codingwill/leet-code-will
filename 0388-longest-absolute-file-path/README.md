<h2><a href="https://leetcode.com/problems/longest-absolute-file-path/">388. Longest Absolute File Path</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Suppose we have a file system that stores both files and directories. An example of one system is represented in the following picture:</p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/mdir.jpg" style="width: 681px; height: 322px; user-select: auto;"></p>

<p style="user-select: auto;">Here, we have <code style="user-select: auto;">dir</code> as the only directory in the root. <code style="user-select: auto;">dir</code> contains two subdirectories, <code style="user-select: auto;">subdir1</code> and <code style="user-select: auto;">subdir2</code>. <code style="user-select: auto;">subdir1</code> contains a file <code style="user-select: auto;">file1.ext</code> and subdirectory <code style="user-select: auto;">subsubdir1</code>. <code style="user-select: auto;">subdir2</code> contains a subdirectory <code style="user-select: auto;">subsubdir2</code>, which contains a file <code style="user-select: auto;">file2.ext</code>.</p>

<p style="user-select: auto;">In text form, it looks like this (with ⟶ representing the tab character):</p>

<pre style="user-select: auto;">dir
⟶ subdir1
⟶ ⟶ file1.ext
⟶ ⟶ subsubdir1
⟶ subdir2
⟶ ⟶ subsubdir2
⟶ ⟶ ⟶ file2.ext
</pre>

<p style="user-select: auto;">If we were to write this representation in code, it will look like this: <code style="user-select: auto;">"dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext"</code>. Note that the <code style="user-select: auto;">'\n'</code> and <code style="user-select: auto;">'\t'</code> are the new-line and tab characters.</p>

<p style="user-select: auto;">Every file and directory has a unique <strong style="user-select: auto;">absolute path</strong> in the file system, which is the order of directories that must be opened to reach the file/directory itself, all concatenated by <code style="user-select: auto;">'/'s</code>. Using the above example, the <strong style="user-select: auto;">absolute path</strong> to <code style="user-select: auto;">file2.ext</code> is <code style="user-select: auto;">"dir/subdir2/subsubdir2/file2.ext"</code>. Each directory name consists of letters, digits, and/or spaces. Each file name is of the form <code style="user-select: auto;">name.extension</code>, where <code style="user-select: auto;">name</code> and <code style="user-select: auto;">extension</code> consist of letters, digits, and/or spaces.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">input</code> representing the file system in the explained format, return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">longest absolute path</strong> to a <strong style="user-select: auto;">file</strong> in the abstracted file system</em>. If there is no file in the system, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that the testcases are generated such that the file system is valid and no file or directory name has length 0.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/dir1.jpg" style="width: 401px; height: 202px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> input = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext"
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> We have only one file, and the absolute path is "dir/subdir2/file.ext" of length 20.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/08/28/dir2.jpg" style="width: 641px; height: 322px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> input = "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext"
<strong style="user-select: auto;">Output:</strong> 32
<strong style="user-select: auto;">Explanation:</strong> We have two files:
"dir/subdir1/file1.ext" of length 21
"dir/subdir2/subsubdir2/file2.ext" of length 32.
We return 32 since it is the longest absolute path to a file.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> input = "a"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> We do not have any files, just a single directory named "a".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= input.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">input</code> may contain lowercase or uppercase English letters, a new line character <code style="user-select: auto;">'\n'</code>, a tab character <code style="user-select: auto;">'\t'</code>, a dot <code style="user-select: auto;">'.'</code>, a space <code style="user-select: auto;">' '</code>, and digits.</li>
	<li style="user-select: auto;">All file and directory names have <strong style="user-select: auto;">positive</strong> length.</li>
</ul>
</div>