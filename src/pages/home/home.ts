import { Component } from '@angular/core';
import { NavController } from 'ionic-angular';
import { IonicPage, NavController } from 'ionic-angular';
import { UserServiceProvider } from '../../providers/user-service/user-service';

@Component({
  selector: 'page-home',
  templateUrl: 'home.html'
})
export class HomePage {
  answer: string = "";
  message: string = "";
  users: any[]=[];
  keepConversation = [];
  greetAnswers = [];
  
  conversaciones: Array<any> = [
						{quien: 'Pedrito', mensaje: 'Hola'},
						{quien: 'Juanita', mensaje: 'Hey que tal!'},
						{quien: 'Pedrito', mensaje: 'Bien y tu?'},
						{quien: 'Juanita', mensaje: 'Ya me tengo que ir chau'}
	];
  constructor(public navCtrl: NavController,public userService: UserServiceProvider) {
	  this.initGreetAnswers();
	  this.initKeepConversation();
  }
  
  public initKeepConversation(){
	  this.keepConversation.push("hola");
  }
  public initGreetAnswers(){
	  this.greetAnswers.push("habla!");
  }
 
  public sendMessage()
  {
	this.conversaciones.push({quien: 'Pedrito', mensaje: this.message});
  }
  ionViewDidLoad(){
    this.userService.getUsers()
    .subscribe(
      (data) => { // Success
        this.users = data['results'];
      },
      (error) =>{
        console.error(error);
      }
    )
  }

}
