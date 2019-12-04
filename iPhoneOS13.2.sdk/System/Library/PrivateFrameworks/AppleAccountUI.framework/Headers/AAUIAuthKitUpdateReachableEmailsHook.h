//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString;
@protocol AAUIServerHookDelegate;

@interface AAUIAuthKitUpdateReachableEmailsHook : NSObject <AAUIServerHook>
{
    NSString *_altDSID;
    id <AAUIServerHookDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAccountWithReachableEmails:(id)arg1 completion:(id /* block */)arg2;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (_Bool)shouldMatchModel:(id)arg1;
- (_Bool)shouldMatchElement:(id)arg1;
- (id)initWithAltDSID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property(readonly) Class superclass;

@end

