use std::io;

fn main() {
    let mut input = String::new();
    let mut score = 0;
    let mut add = 1;

    io::stdin().read_line(&mut input).unwrap();

    let mut range = input.trim().parse::<i32>().unwrap();

    for _ in 0..range {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();
        for k in input.trim().chars() {
            if k == 'O' {
                score += add;
                add += 1;
            }
            else {
                add = 1;
            }
        }
        println!("{}", score);
        score = 0;
        add = 1;
    }

    
}