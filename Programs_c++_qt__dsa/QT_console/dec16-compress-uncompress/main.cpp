#include <QCoreApplication>
#include <QDebug>

void display(QString title,QByteArray &data)
{
    qDebug()<<"---"<<title<<"---";
    qDebug()<<"Length "<<data.size();
    qDebug()<<"Plain "<<data;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    QByteArray data("this is my world mso slkjnvfosnfvo foier j0je0 0i jggjer0joe jgoijeroi  erpgjpejg0 e0igj0e pejfrpo[ejoj eoirj oi[ejof je0j oefoi[ej fo[ejrojeroi [goerjgej eogjeogj o[etjgoie joiejttoigpitiougj iouetgioue gourtjgou rtojet goj5o9g jrtogj 9ortgj9r jg9urtj g9urtjg 9rj9 9gu[j59gj59g rettgoe g heg oer goerjgo[iero[g ero gjeroghoreg9 eg er9gh 9trehg9re 9uet9ghe9icon nconks ck cjn k khin kdf df df df  kdk kdf fl dflo ndf kd .s l/dfmvlm;,m psopsm sm; Akashb alakasba akash akash akash askash kaakka akas hakash akash akash akashakash asdjosj dsk;k s;kcskc;ks;clsnvk;jdfv slrnsnk sk;nsnn nsr nsfk djbvjsdb kjldfh hev");
//    QByteArray compressed;
//    QByteArray unCompressed;
//    compressed=qCompress(data,9);
//    unCompressed = qUncompress(compressed);
//    display("Original",data);
//    display("Compressed",compressed);
//    display("Uncompressed",unCompressed);

    QByteArray da("AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH AKASH ");
    QByteArray comp=qCompress(da);
    QByteArray decomp=qUncompress(comp);
    qDebug()<<"Original"<<da.size();
    qDebug()<<"Comp "<<comp.size();
    qDebug()<<"Dcomp "<<decomp.size();
    return a.exec();
}
