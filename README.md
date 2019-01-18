# Getting started

The Releans SDK enables developers to use Releans Services in their code. You can get started in minutes.

## How to Build


The generated code has dependencies over external libraries like UniRest. These dependencies are defined in the ```PodFile``` file that comes with the SDK. 
To resolve these dependencies, we use the Cocoapods package manager.
Visit https://guides.cocoapods.org/using/getting-started.html to setup Cocoapods on your system.
Open command prompt and type ```pod --version```. This should display the current version of Cocoapods installed if the installation was successful.

Using command line, navigate to the directory containing the generated files (including ```PodFile```) for the SDK. 
Run the command ```pod install```. This should install all the required dependencies and create the ```pods``` directory in your project directory.

![Installing dependencies using Cocoapods](https://apidocs.io/illustration/objc?step=AddDependencies&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)

Open the project workspace using the (Releans.xcworkspace) file. Invoke the build process using `Command(⌘)+B` shortcut key or using the `Build` menu as shown below.

![Building SDK using Xcode](https://apidocs.io/illustration/objc?step=BuildSDK&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)


## How to Use

The generated code is a Cocoa Touch Static Library which can be used in any iOS project. The support for these generated libraries go all the way back to iOS 6.

The following section explains how to use the Releans library in a new iOS project.     
### 1. Starting a new project
To start a new project, left-click on the ```Create a new Xcode project```.
![Create Test Project - Step 1](https://apidocs.io/illustration/objc?step=Test1&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)

Next, choose **Single View Application** and click ```Next```.
![Create Test Project - Step 2](https://apidocs.io/illustration/objc?step=Test2&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)

Provide **Test-Project** as the product name click ```Next```.
![Create Test Project - Step 3](https://apidocs.io/illustration/objc?step=Test3&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)

Choose the desired location of your project folder and click ```Create```.
![Create Test Project - Step 4](https://apidocs.io/illustration/objc?step=Test4&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)

### 2. Adding the static library dependency
To add this dependency open a terminal and navigate to your project folder. Next, input ```pod init``` and press enter.
![Add dependency - Step 1](https://apidocs.io/illustration/objc?step=Add0&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)

Next, open the newly created ```PodFile``` in your favourite text editor. Add the following line : pod 'Releans', :path => 'Vendor/Releans'
![Add dependency - Step 2](https://apidocs.io/illustration/objc?step=Add1&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)

Execute `pod install` from terminal to install the dependecy in your project. This would add the dependency to the newly created test project.
![Add dependency - Step 3](https://apidocs.io/illustration/objc?step=Add2&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)


## How to Test

Unit tests in this SDK can be run using Xcode. 

First build the SDK as shown in the steps above and naivgate to the project directory and open the Releans.xcworkspace file.

Go to the test explorer in Xcode as shown in the picture below and click on `run tests` from the menu. 
![Run tests](https://apidocs.io/illustration/objc?step=RunTests&workspaceFolder=Releans-ObjC&workspaceName=Releans&projectName=Releans&rootNamespace=Releans)


## Initialization

### Authentication
In order to setup authentication and initialization of the API client, you need the following information.

| Parameter | Description |
|-----------|-------------|
| oAuthAccessToken | OAuth 2.0 Access Token |



Configuration variables can be set as following.
```Objc
// Configuration parameters and credentials
Configuration_OAuthAccessToken = "Configuration_OAuthAccessToken"; // OAuth 2.0 Access Token

```

# Class Reference

## <a name="list_of_controllers"></a>List of Controllers

* [MessageController](#message_controller)
* [SenderController](#sender_controller)
* [BalanceController](#balance_controller)

## <a name="message_controller"></a>![Class: ](https://apidocs.io/img/class.png ".MessageController") MessageController

### Get singleton instance
```objc
Message* message = [[Message alloc]init] ;
```

### <a name="get_all_messages_with_completion_block"></a>![Method: ](https://apidocs.io/img/method.png ".MessageController.getAllMessagesWithCompletionBlock") getAllMessagesWithCompletionBlock

> List all messages sent by the account.


```objc
function getAllMessagesWithCompletionBlock:(CompletedGetAllMessages) onCompleted()
```



#### Example Usage

```objc

    [self.message getAllMessagesWithCompletionBlock:  ^(BOOL success, HttpContext* context, id response, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_price_of_message_async_with_mobile_number"></a>![Method: ](https://apidocs.io/img/method.png ".MessageController.getPriceOfMessageAsyncWithMobileNumber") getPriceOfMessageAsyncWithMobileNumber

> Return cost of sending a message to the number.


```objc
function getPriceOfMessageAsyncWithMobileNumber:(NSString*) mobileNumber
                completionBlock:(CompletedGetPriceOfMessage) onCompleted(mobileNumber)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| mobileNumber |  ``` Required ```  | Mobile number you want to know the price of sending a message. |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* mobileNumber = @"mobileNumber";

    [self.message getPriceOfMessageAsyncWithMobileNumber: mobileNumber  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_view_message_async_with_id"></a>![Method: ](https://apidocs.io/img/method.png ".MessageController.getViewMessageAsyncWithId") getViewMessageAsyncWithId

> Return the details of the message.


```objc
function getViewMessageAsyncWithId:(NSString*) mid
                completionBlock:(CompletedGetViewMessage) onCompleted(mid)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| mid |  ``` Required ```  ``` DefaultValue ```  | Id of the message you need to return its details. |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* mid = @"id";

    [self.message getViewMessageAsyncWithId: mid  completionBlock:^(BOOL success, HttpContext* context, id response, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_send_sms_message_async_with_sender_id"></a>![Method: ](https://apidocs.io/img/method.png ".MessageController.createSendSMSMessageAsyncWithSenderId") createSendSMSMessageAsyncWithSenderId

> Send a single message.


```objc
function createSendSMSMessageAsyncWithSenderId:(NSString*) senderId
                mobileNumber:(NSString*) mobileNumber
                message:(NSString*) message
                completionBlock:(CompletedPostSendSMSMessage) onCompleted(senderId mobileNumber : mobileNumber message : message)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| senderId |  ``` Required ```  ``` DefaultValue ```  | Sender id to send the message from. |
| mobileNumber |  ``` Required ```  ``` DefaultValue ```  | The mobile number supposed to receive the message. |
| message |  ``` Required ```  ``` DefaultValue ```  | Message text. |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* senderId = @"senderId";
    NSString* mobileNumber = @"mobileNumber";
    NSString* message = @"message";

    [self.message createSendSMSMessageAsyncWithSenderId: senderId mobileNumber : mobileNumber message : message  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="sender_controller"></a>![Class: ](https://apidocs.io/img/class.png ".SenderController") SenderController

### Get singleton instance
```objc
Sender* sender = [[Sender alloc]init] ;
```

### <a name="get_sender_name_details_async_with_id"></a>![Method: ](https://apidocs.io/img/method.png ".SenderController.getSenderNameDetailsAsyncWithId") getSenderNameDetailsAsyncWithId

> Return the details of the sender name.


```objc
function getSenderNameDetailsAsyncWithId:(NSString*) mid
                completionBlock:(CompletedGetSenderNameDetails) onCompleted(mid)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| mid |  ``` Required ```  ``` DefaultValue ```  | The sender id you want its details |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* mid = @"id";

    [self.sender getSenderNameDetailsAsyncWithId: mid  completionBlock:^(BOOL success, HttpContext* context, id response, NSError* error) { 
       //Add code here
    }];
```


### <a name="create_sender_name_async_with_sender_name"></a>![Method: ](https://apidocs.io/img/method.png ".SenderController.createSenderNameAsyncWithSenderName") createSenderNameAsyncWithSenderName

> Create a new sender id to send messages using it


```objc
function createSenderNameAsyncWithSenderName:(NSString*) senderName
                completionBlock:(CompletedPostCreateSenderName) onCompleted(senderName)
```

#### Parameters

| Parameter | Tags | Description |
|-----------|------|-------------|
| senderName |  ``` Required ```  ``` DefaultValue ```  | Name you want to register as Sender Name |





#### Example Usage

```objc
    // Parameters for the API call
    NSString* senderName = @"senderName";

    [self.sender createSenderNameAsyncWithSenderName: senderName  completionBlock:^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       //Add code here
    }];
```


### <a name="get_all_senders_with_completion_block"></a>![Method: ](https://apidocs.io/img/method.png ".SenderController.getAllSendersWithCompletionBlock") getAllSendersWithCompletionBlock

> List all senders names associated with the account


```objc
function getAllSendersWithCompletionBlock:(CompletedGetAllSenders) onCompleted()
```



#### Example Usage

```objc

    [self.sender getAllSendersWithCompletionBlock:  ^(BOOL success, HttpContext* context, id response, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)

## <a name="balance_controller"></a>![Class: ](https://apidocs.io/img/class.png ".BalanceController") BalanceController

### Get singleton instance
```objc
Balance* balance = [[Balance alloc]init] ;
```

### <a name="get_balance_with_completion_block"></a>![Method: ](https://apidocs.io/img/method.png ".BalanceController.getBalanceWithCompletionBlock") getBalanceWithCompletionBlock

> Get your available balance


```objc
function getBalanceWithCompletionBlock:(CompletedGetBalance) onCompleted()
```



#### Example Usage

```objc

    [self.balance getBalanceWithCompletionBlock:  ^(BOOL success, HttpContext* context, NSString* response, NSError* error) { 
       //Add code here
    }];
```


[Back to List of Controllers](#list_of_controllers)



