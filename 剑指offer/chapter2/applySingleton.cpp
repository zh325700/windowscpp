#include <iostream>

using namespace std;

// This is the eager version
class Singleton{
public:
  int n =10;
  static Singleton *getInstance(){
      return instance;
  }
private:
  static Singleton *instance;
  Singleton(){
    cout<<"new instance created"<<endl;
  }
  class GC
    {
    public:
        ~GC()
        {
            // 可以在这里销毁所有的资源，例如：db 连接、文件句柄等
            if (instance != NULL) {
                cout << "Here destroy the Singleton instance..." << endl;
                delete instance;
                instance = NULL;
            }
        }
        static GC gc;  // 用于释放单例
    };

};

// This is the lazy version
// class Singleton{
// public:
//   int n =10;
//   static Singleton * getInstance(){
//     if(instance == NULL){
//       instance = new Singleton();
//     }
//     return instance;
//   }
// private:
//   Singleton(){cout<<"ctor is called"<<endl;}
//   ~Singleton(){cout<<"dtor is called";}
//   static Singleton *instance;
//
//       class GC
//     {
//     public:
//         ~GC()
//         {
//             // 可以在这里销毁所有的资源，例如：db 连接、文件句柄等
//             if (instance != NULL) {
//                 cout << "Here destroy the m_pSingleton..." << endl;
//                 delete instance;
//                 instance = NULL;
//             }
//         }
//         static GC gc;  // 用于释放单例
//     };
// };

//GC mechanism
Singleton::GC Singleton::GC::gc;

// eager
Singleton *Singleton::instance = new Singleton();
//lazy
// Singleton *Singleton::instance = NULL;

int main(){
  cout<<Singleton::getInstance()->n<<endl;
  return 0;
}
