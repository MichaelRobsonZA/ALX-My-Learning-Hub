<h1>Introduction to Linux Permissions</h1>

<h2>What are Linux permissions?</h2>
<p>Linux permissions are the set of rules that govern access to files and directories on a Linux system. Each file and directory has an owner and a group associated with it, and the permissions determine who can read, write, and execute the file or directory.</p>

<h2>Types of Linux Permissions</h2>
<p>There are three types of Linux permissions: read (r), write (w), and execute (x).</p>

<h3>Read (r) Permission</h3>
<p>The read permission allows a user to view the contents of a file or directory. A file with the read permission set for a user will allow that user to open the file and read its contents.</p>

<h3>Write (w) Permission</h3>
<p>The write permission allows a user to modify the contents of a file or directory. A file with the write permission set for a user will allow that user to open the file and make changes to its contents.</p>

<h3>Execute (x) Permission</h3>
<p>The execute permission allows a user to execute a file. If the execute permission is set for a file, the file can be run as a program or script. For directories, the execute permission allows a user to access the contents of the directory.</p>

<h2>Important Linux Permission Commands</h2>
<p>Here are some important Linux permission commands:</p>

<ul>
  <li><a href="#permissions">Introduction to Linux Permissions</a></li>
  <li><a href="#chmod">chmod</a></li>
  <li><a href="#sudo">sudo</a></li>
  <li><a href="#su">su</a></li>
  <li><a href="#chown">chown</a></li>
  <li><a href="#chgrp">chgrp</a></li>
  <li><a href="#id">id</a></li>
  <li><a href="#groups">groups</a></li>
  <li><a href="#whoami">whoami</a></li>
  <li><a href="#adduser">adduser</a></li>
  <li><a href="#useradd">useradd</a></li>
  <li><a href="#addgroup">addgroup</a></li>
</ul>

<h2>chmod</h2>
<p>The chmod command allows you to change the permissions of a file or directory. The chmod command takes two arguments: the permission settings, and the file or directory you want to modify.
</p>
<h3>Example:</h3>
<p>To change the permission of a file called file.txt to allow the owner to read and write, and everyone else to only read, the following command can be used:
</p>
<pre>
chmod u+rw,g+r,o+r file.txt
</pre>
<h3>Exercise:</h3>
<ol>
  <li>Create a file called test.txt and give it some content.</li>
  <li>Change the permissions of test.txt so that only the owner can read and write to it.</li>
  <li>Change the permissions of test.txt so that everyone can read and write to it.</li>
</ol>
<h2>sudo</h2>
<p>The sudo command allows you to run a command as another user, typically the root user. This can be useful if you need to perform an action that requires elevated privileges, such as installing software or changing system settings.
</p>
<h3>Example:</h3>
<p>To install a package using apt as the root user, the following command can be used:
</p>
<pre>
sudo apt install package-name
</pre>
<h3>Exercise:</h3>
<ol>
  <li>Install a package using apt as the root user.</li>
  <li>Try to install a package without using sudo and observe the error message.</li>
  <li>Install the same package using sudo and observe the output.</li>
</ol>
<h2>su</h2>
<p>The su command allows you to switch to another user account. By default, su switches to the root account, but you can specify a different user with the -l option.
</p>
<h3>Example:</h3>
<p>To switch to the user account of newuser, the following command can be used:
</p>
<pre>
su -l newuser
</pre>
<h3>Exercise:</h3>
<ol>
  <li>Switch to the root account using su.</li>
  <li>Switch back to your original user account using su.</li>
  <li>Switch to the user account of a different user on your system.</li>
</ol>
<h2>chown</h2>
<p>The chown command allows you to change the owner of a file or directory. The chown command takes two arguments: the user and group you want to set as the new owner, and the file or directory you want to modify.
</p>
<h3>Example:</h3>
<p>To change the owner of a file called file.txt to the user newuser, the following command can be used:
</p>
<pre>
chown newuser file.txt
</pre>
<h3>Exercise:</h3>
<ol>
  <li>Create a file called test and use the chown command to change its owner to a different user. Verify the change by using the ls -l command.</li>

</ol>
<h3>addgroup</h3>
<p>The addgroup command is used to add a new group to the system. The basic syntax for the addgroup command is:</p>
<pre><code>sudo addgroup group_name</code></pre>
<p>Here, group_name is the name of the group that you want to create. For example, to create a group called developers, you would run:</p>
<pre><code>sudo addgroup developers</code></pre>
<p>You can verify that the group was created successfully by using the cat /etc/group command, which will display a list of all groups on the system.</p>
<h3>Exercise:</h3>
<ol>
  <li>Use the addgroup command to create a new group.</li>
  <li>Verify that the group was created successfully using the cat /etc/group command.</li>
</ol>
<h3>The id Command</h3>
<p>The id command is used to display the user ID (UID) and group ID (GID) associated with a user account. The id command without any arguments will display the information for the current user. If a username is specified as an argument, the id command will display the information for that user.</p>
<h4>Example:</h4>
<p>To display the user ID and group ID for the current user, run the following command:</p>
<code> id</code>
<p>To display the user ID and group ID for a specific user, run the following command:</p>
<code> id username</code>
<h4>Exercise:</h4>
<ol>
  <li>Create a new user account using the adduser or useradd command.</li>
  <li>Run the id command for the new user account and compare the output to the id command for your current user account.</li>
</ol>
<h3>The groups Command</h3>
<p>The groups command is used to display the groups a user is associated with. The groups command without any arguments will display the groups for the current user. If a username is specified as an argument, the groups command will display the groups for that user.</p>
<h4>Example:</h4>
<p>To display the groups for the current user, run the following command:</p>
<code> groups</code>
<p>To display the groups for a specific user, run the following command:</p>
<code> groups username</code>
<h4>Exercise:</h4>
<ol>
  <li>Create a new user account using the adduser or useradd command.</li>
  <li>Create a new group using the addgroup command.</li>
  <li>Add the new user to the new group using the usermod command.</li>
  <li>Run the groups command for the new user account to verify that they are now a member of the new group.</li>
</ol>
<h3>The whoami Command</h3>
<p>The whoami command is used to display the username of the current user. The whoami command does not take any arguments.</p>
<h4>Example:</h4>
<p>To display the username of the current user, run the following command:</p>
<code> whoami</code>
<h4>Exercise:</h4>
<ol>
  <li>Create a new user account using the adduser or useradd command.</li>
  <li>Switch to the new user account using the su command.</li>
  <li>Run the whoami command to verify that you are now logged in as the new user.</li>
</ol>
<h3>The adduser and useradd Commands</h3>
<p>The adduser and useradd commands are used to create a new user account on a Linux system. The adduser command is commonly used on Debian-based systems, while the useradd command is commonly used on Red Hat-based systems. The syntax for the commands may differ slightly between distributions, so be sure to consult the documentation for your specific distribution.</p>
<h4>Example:</h4>
<p>Exercise:</p>
<ol>
  <li>Create a new group called testgroup using the addgroup command</li>
  <li>Change the group ownership of a file or directory to testgroup using the chgrp command</li>
  <li>Verify the changes by using the ls -l command and checking the group ownership of the file/directory</li>
  <li>Try using the id command to see the groups that the current user belongs to and see if testgroup is included</li>
</ol>
