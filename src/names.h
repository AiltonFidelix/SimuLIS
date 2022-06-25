#ifndef NAMES_H
#define NAMES_H

#include <QObject>
#include <QRandomGenerator>

class Names : public QObject
{
    Q_OBJECT
public:
    explicit Names(QObject *parent = nullptr);

    QString getName(int gender);

private:
    const short int m_maxNames = 113;
    const short int m_maxLastNames = 25;

    QStringList m_maleNames = {"James",
                             "Robert",
                             "John",
                             "Michael",
                             "David",
                             "William",
                             "Richard",
                             "Joseph",
                             "Thomas",
                             "Charles",
                             "Christopher",
                             "Daniel",
                             "Matthew",
                             "Anthony",
                             "Mark",
                             "Donald",
                             "Steven",
                             "Paul",
                             "Andrew",
                             "Joshua",
                             "Kenneth",
                             "Kevin",
                             "Brian",
                             "George",
                             "Timothy",
                             "Ronald",
                             "Edward",
                             "Jason",
                             "Jeffrey",
                             "Ryan",
                             "Jacob",
                             "Gary",
                             "Nicholas",
                             "Eric",
                             "Jonathan",
                             "Stephen",
                             "Larry",
                             "Justin",
                             "Scott",
                             "Brandon",
                             "Benjamin",
                             "Samuel",
                             "Gregory",
                             "Alexander",
                             "Frank",
                             "Patrick",
                             "Raymond",
                             "Jack",
                             "Dennis",
                             "Jerry",
                             "Tyler",
                             "Aaron",
                             "Jose",
                             "Adam",
                             "Nathan",
                             "Henry",
                             "Douglas",
                             "Zachary",
                             "Peter",
                             "Kyle",
                             "Ethan",
                             "Walter",
                             "Noah",
                             "Jeremy",
                             "Christian",
                             "Keith",
                             "Roger",
                             "Terry",
                             "Gerald",
                             "Harold",
                             "Sean",
                             "Austin",
                             "Carl",
                             "Arthur",
                             "Lawrence",
                             "Dylan",
                             "Jesse",
                             "Jordan",
                             "Bryan",
                             "Billy",
                             "Joe",
                             "Bruce",
                             "Gabriel",
                             "Logan",
                             "Albert",
                             "Willie",
                             "Alan",
                             "Juan",
                             "Wayne",
                             "Elijah",
                             "Randy",
                             "Roy",
                             "Vincent",
                             "Ralph",
                             "Eugene",
                             "Russell",
                             "Bobby",
                             "Mason",
                             "Philip",
                             "Louis",
                             "João",
                             "Carlos",
                             "Mateus",
                             "Lucas",
                             "Aldo",
                             "Paulo",
                             "Vitor",
                             "Luiz",
                             "Arnaldo",
                             "Gustavo",
                             "Jefferson",
                             "Celito",
                             "Junior"};

    QStringList m_femaleNames = {"Mary",
                               "Patricia",
                               "Jennifer",
                               "Linda"
                               "Elizabeth",
                               "Barbara",
                               "Susan",
                               "Jessica",
                               "Sarah",
                               "Karen",
                               "Lisa",
                               "Nancy",
                               "Betty",
                               "Margaret",
                               "Sandra",
                               "Ashley",
                               "Kimberly",
                               "Emily",
                               "Donna",
                               "Michelle",
                               "Carol",
                               "Amanda",
                               "Dorothy",
                               "Melissa",
                               "Deborah",
                               "Stephanie",
                               "Rebecca",
                               "Sharon",
                               "Laura",
                               "Cynthia",
                               "Kathleen",
                               "Amy",
                               "Angela",
                               "Shirley",
                               "Anna",
                               "Brenda"
                               "Pamela",
                               "Emma",
                               "Nicole",
                               "Helen",
                               "Samantha",
                               "Katherine",
                               "Christine",
                               "Debra",
                               "Rachel",
                               "Carolyn",
                               "Janet",
                               "Catherine",
                               "Maria",
                               "Heather",
                               "Diane",
                               "Ruth",
                               "Julie",
                               "Olivia",
                               "Joyce",
                               "Virginia",
                               "Victoria",
                               "Kelly",
                               "Lauren",
                               "Christina",
                               "Joan",
                               "Evelyn",
                               "Judith",
                               "Megan",
                               "Andrea",
                               "Cheryl",
                               "Hannah",
                               "Jacqueline",
                               "Martha",
                               "Gloria",
                               "Teresa",
                               "Ann",
                               "Sara",
                               "Madison",
                               "Frances",
                               "Kathryn",
                               "Janice",
                               "Jean",
                               "Abigail",
                               "Alice",
                               "Julia",
                               "Judy",
                               "Sophia",
                               "Grace",
                               "Denise",
                               "Amber",
                               "Doris",
                               "Marilyn",
                               "Danielle",
                               "Beverly",
                               "Isabella",
                               "Theresa",
                               "Diana",
                               "Natalie",
                               "Brittany",
                               "Charlotte",
                               "Marie",
                               "Kayla",
                               "Alexis",
                               "Lori",
                               "Maria",
                               "Amanda",
                               "Yara",
                               "Lara",
                               "Catiele",
                               "Daniele",
                               "Samira",
                               "Camila",
                               "Fernanda",
                               "Rosana",
                               "Aline",
                               "Liana",
                               "Sarah"};

    QStringList m_lastNames = {"Pereira",
                             "Prudêncio",
                             "Souza",
                             "Balboa",
                             "Mendes",
                             "Smith",
                             "Mattos",
                             "Baltimore",
                             "Fernandes",
                             "Goleman",
                             "Malich",
                             "Thobe",
                             "Williams",
                             "Lopez",
                             "Thomas",
                             "Thompson",
                             "Lewis",
                             "Robinson",
                             "Torres",
                             "Roberts",
                             "Turner",
                             "Parker",
                             "Adams",
                             "Jones",
                             "Miller"};
};

#endif // NAMES_H