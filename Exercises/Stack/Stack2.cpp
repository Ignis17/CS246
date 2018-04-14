+// This program illustrates the Stack STL function.
+// Name: Joel Turbi
+// Course: CS246
+// Created: 04/12/2018
+
+#include <iostream>
+#include <stack>
+
+using namespace std;
+
+int main()
+{
+  stack<string> words;
+
+  words.push("Madam,");
+  words.push(" I'm" );
+  words.push("Adam.");
+
+  while(!words.empty())
+  {
+    std::cout << words.top() << std::endl;
+    words.pop();
+  }
+  return 0;
+}
