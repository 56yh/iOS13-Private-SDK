//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoMessageDeletions, NSArray;

@interface NNMKDeletionResult : NSObject
{
    NNMKProtoMessageDeletions *_protectedProtobuf;
    NNMKProtoMessageDeletions *_unprotectedNotificationProtobuf;
    NNMKProtoMessageDeletions *_unprotectedDefaultProtobuf;
    NSArray *_protectedMessageIds;
    NSArray *_unprotectedNotificationMessageIds;
    NSArray *_unprotectedDefaultMessageIds;
}

@property(retain, nonatomic) NSArray *unprotectedDefaultMessageIds; // @synthesize unprotectedDefaultMessageIds=_unprotectedDefaultMessageIds;
@property(retain, nonatomic) NSArray *unprotectedNotificationMessageIds; // @synthesize unprotectedNotificationMessageIds=_unprotectedNotificationMessageIds;
@property(retain, nonatomic) NSArray *protectedMessageIds; // @synthesize protectedMessageIds=_protectedMessageIds;
@property(retain, nonatomic) NNMKProtoMessageDeletions *unprotectedDefaultProtobuf; // @synthesize unprotectedDefaultProtobuf=_unprotectedDefaultProtobuf;
@property(retain, nonatomic) NNMKProtoMessageDeletions *unprotectedNotificationProtobuf; // @synthesize unprotectedNotificationProtobuf=_unprotectedNotificationProtobuf;
@property(retain, nonatomic) NNMKProtoMessageDeletions *protectedProtobuf; // @synthesize protectedProtobuf=_protectedProtobuf;

@end

