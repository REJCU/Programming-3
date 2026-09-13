use std::io;

// have to retrieve raw string parse and then convert to float
fn conversion_example() {
    std::println!("Enter float: ");
    let mut input_num = String::new();

    io::stdin()
        .read_line(&mut input_num)
        .expect("failed to read");

    // no print .type like in python but change to i32 for failure
    let x: f32 = input_num.trim_end().parse().unwrap();

    println!("parsed and then converted to f32: {} ", x);

    if x > 0. {
        println!("Number is Positive");
    } else if x < 0. {
        println!("number is negative")
    } else {
        println!("Number is zero")
    };
}

fn find_position() {
    println!("Enter your salary: ");
    let mut input_salary = String::new();
    let mut category: i32 = 0;

    io::stdin()
        .read_line(&mut input_salary)
        .expect("failed to read");

    let salary: i32 = input_salary.trim_end().parse().unwrap();

    if salary < 60000 {
        category = 1;
    } else if salary < 80000 {
        category = 2;
    } else if salary > 80000 {
        category = 3;
    } else {
        category = 0;
    }

    match category {
        1 => println!("Engineer"),
        2 => println!("Senior Engineer"),
        3 => println!("Manager"),
        0 => println!("invalid"),
        _ => panic!(),
    }
}

struct Car {
    color: String,
    make: String,
    year: i32,
}

fn get_car() {
    println!("enter car color, make and year(int): ");

    let mut color = String::new();
    let mut make = String::new();
    let mut year = String::new();

    io::stdin().read_line(&mut color).expect("failed to read");
    io::stdin().read_line(&mut make).expect("failed to read");
    io::stdin().read_line(&mut year).expect("failed to read");

    let year: i32 = year.trim_end().parse().unwrap();
    let car = Car { color, make, year };

    print!(
        "Colour: {},Make: {},Year: {}",
        car.color, car.make, car.year
    );
}

fn main() {
    // println!("Hello, world!");
    // conversion_example();
    // find_position();
    get_car();
}
