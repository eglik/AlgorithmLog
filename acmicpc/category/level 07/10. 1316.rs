use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let mut count = input.trim().parse::<i32>().unwrap();

    for i in 0..count.clone() {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();

        let mut alphabet = (b'a'..=b'z').map(char::from).collect::<Vec<char>>();

        let chars = input.trim().chars();
        let mut last = '*';

        for c in chars {
            if alphabet.contains(&c) {
                alphabet[(c as i32 - 97) as usize] = '*';
                last = c;
            }
            else if last != c {
                count -= 1;
                break;
            }
        }
    }
    
    println!("{}", count);
}