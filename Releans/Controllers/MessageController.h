//
//  Releans
//
//  This file was automatically generated for Releans by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"

@interface MessageController : BaseController

/**
* Completion block definition for asynchronous call to Get all messages */
typedef void (^CompletedGetAllMessages)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* List all messages sent by the account.
*/
- (void) getAllMessagesWithCompletionBlock:(CompletedGetAllMessages) onCompleted;

/**
* Completion block definition for asynchronous call to Get price of Message */
typedef void (^CompletedGetPriceOfMessage)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Return cost of sending a message to the number.
* @param    mobileNumber    Required parameter: Mobile number you want to know the price of sending a message.
*/
- (void) getPriceOfMessageAsyncWithMobileNumber:(NSString*) mobileNumber
                completionBlock:(CompletedGetPriceOfMessage) onCompleted;

/**
* Completion block definition for asynchronous call to View message */
typedef void (^CompletedGetViewMessage)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Return the details of the message.
* @param    mid    Required parameter: Id of the message you need to return its details.
*/
- (void) getViewMessageAsyncWithId:(NSString*) mid
                completionBlock:(CompletedGetViewMessage) onCompleted;

/**
* Completion block definition for asynchronous call to Send SMS Message */
typedef void (^CompletedPostSendSMSMessage)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Send a single message.
* @param    senderId    Required parameter: Sender id to send the message from.
* @param    mobileNumber    Required parameter: The mobile number supposed to receive the message.
* @param    message    Required parameter: Message text.
*/
- (void) createSendSMSMessageAsyncWithSenderId:(NSString*) senderId
                mobileNumber:(NSString*) mobileNumber
                message:(NSString*) message
                completionBlock:(CompletedPostSendSMSMessage) onCompleted;

@end