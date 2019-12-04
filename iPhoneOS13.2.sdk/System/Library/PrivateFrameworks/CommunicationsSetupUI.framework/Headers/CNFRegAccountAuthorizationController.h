//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@class NSString;
@protocol CNFRegAccountAuthorizationDelegate;

@interface CNFRegAccountAuthorizationController : CNFRegAccountWebViewController
{
    NSString *_authID;
    NSString *_authToken;
    id <CNFRegAccountAuthorizationDelegate> _delegate;
}

@property(nonatomic) id <CNFRegAccountAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *authID; // @synthesize authID=_authID;
- (id)authTokenHeaderValue;
- (id)authIdHeaderValue;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)cancelTapped;
- (id)logName;
- (id)bagKey;
- (void)dealloc;
- (id)initWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;

@end

