//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreBookkeeper/ISURLOperationDelegate-Protocol.h>

@class ISStoreURLOperation, NSNumber, NSString, SSAuthenticationContext;

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional
- (_Bool)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;
- (void)operation:(ISStoreURLOperation *)arg1 shouldAuthenticateWithContext:(SSAuthenticationContext *)arg2 responseHandler:(void (^)(SSAuthenticateResponse *, NSError *))arg3;
- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
@end

