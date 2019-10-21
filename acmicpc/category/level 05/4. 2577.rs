use std::io;

fn main() {
    let mut input = String::new();
    let mut number = vec![];
    number.resize(10, 0);

    let mut multiply = 1;

    for _ in 0..3 {
        io::stdin().read_line(&mut input).unwrap();
        multiply *= input.trim().parse::<i32>().unwrap();
        input.clear();
    }

    for s in multiply.to_string().chars() {
        number[s.to_digit(10).unwrap() as usize] += 1;
    }

    for num in number {
        println!("{}", num);
    }
}