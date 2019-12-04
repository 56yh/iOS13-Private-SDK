//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATOperation.h"

@class IDSService, NSDictionary, NSObject, NSSet;
@protocol CRKIdentitySharingOperationDelegate;

@interface CRKIdentitySharingOperation : CATOperation
{
    NSObject<CRKIdentitySharingOperationDelegate> *_delegate;
    IDSService *_service;
    NSDictionary *_message;
    NSSet *_destinations;
}

@property(readonly, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property(copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic) __weak NSObject<CRKIdentitySharingOperationDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)main;
- (_Bool)isAsynchronous;
- (void)didSendWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithService:(id)arg1 message:(id)arg2 recipients:(id)arg3;

@end

