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

@interface BalanceController : BaseController

/**
* Completion block definition for asynchronous call to Balance */
typedef void (^CompletedGetBalance)(BOOL success, HttpContext* context, NSString* response, NSError* error);

/**
* Get your available balance
*/
- (void) getBalanceWithCompletionBlock:(CompletedGetBalance) onCompleted;

@end