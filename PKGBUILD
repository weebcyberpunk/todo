# Maintainer: GG weebcyberpunk@gmail.com
pkgname=todo-stupid
pkgver=1.0.1
pkgrel=1
pkgdesc="The stupid todo list"
arch=("x86_64")
url="https://www.github.com/weebcyberpunk/todo"
license=('GPL3')
provides=(todo)
source=("git+$url")
md5sums=('SKIP')

build() {
	cd "todo"
	gcc *.c *.h -o todo
}

package() {
	cd "todo"
	install -Dm755 todo $pkgdir/usr/bin/todo
	install -Dm644 "help.txt" $pkgdir/usr/share/$pkgname/"help.txt"
	install -Dm644 todo.1 $pkdir/usr/share/man/man1/todo.1
}
