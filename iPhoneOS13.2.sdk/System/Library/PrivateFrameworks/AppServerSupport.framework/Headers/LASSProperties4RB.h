//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol OS_xpc_object;

@interface LASSProperties4RB : NSObject
{
    int _requestedJetsamPriority;
    NSString *_label;
    NSUUID *_instance;
    NSObject<OS_xpc_object> *_additionalProperties;
}

+ (id)propertiesForPid:(int)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, nonatomic) int requestedJetsamPriority; // @synthesize requestedJetsamPriority=_requestedJetsamPriority;
@property(readonly, nonatomic) NSUUID *instance; // @synthesize instance=_instance;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (id)initWithLabel:(id)arg1 instance:(id)arg2 requestedJetsamPriority:(int)arg3 additionalProperties:(id)arg4;

@end

