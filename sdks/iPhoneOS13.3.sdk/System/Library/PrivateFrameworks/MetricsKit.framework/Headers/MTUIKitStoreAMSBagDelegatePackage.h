//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTDelegatePackage-Protocol.h>

@class MTConfigAMSMetricsDelegate, MTConvenienceEnvironmentDelegate, MTEventRecorderAMSMetricsDelegate;

@interface MTUIKitStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage>
{
    id /* CDUnknownBlockType */ _hostAppBlock;
    MTConfigAMSMetricsDelegate *_configDelegate;
    MTEventRecorderAMSMetricsDelegate *_eventRecorderDelegate;
    MTConvenienceEnvironmentDelegate *_environmentDelegate;
}

@property(retain, nonatomic) MTConvenienceEnvironmentDelegate *environmentDelegate; // @synthesize environmentDelegate=_environmentDelegate;
@property(retain, nonatomic) MTEventRecorderAMSMetricsDelegate *eventRecorderDelegate; // @synthesize eventRecorderDelegate=_eventRecorderDelegate;
@property(retain, nonatomic) MTConfigAMSMetricsDelegate *configDelegate; // @synthesize configDelegate=_configDelegate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hostAppBlock; // @synthesize hostAppBlock=_hostAppBlock;
// - (void).cxx_destruct;
- (id)initWithAMSBag:(id)arg1 containerId:(id)arg2 pageURLBlock:(id /* CDUnknownBlockType */)arg3 resourceRevNumBlock:(id /* CDUnknownBlockType */)arg4 hostAppBlock:(id /* CDUnknownBlockType */)arg5;
- (id)initWithAMSBag:(id)arg1;
- (id)init;

@end

