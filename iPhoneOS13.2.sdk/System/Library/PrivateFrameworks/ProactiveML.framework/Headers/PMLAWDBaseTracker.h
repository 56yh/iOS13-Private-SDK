//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject
{
    AWDProactiveModelFittingModelInfo *_modelInfo;
}

+ (id)trackerForPlanId:(struct NSString *)arg1;
+ (id)trackerForModelName:(id)arg1 modelVersion:(id)arg2 modelLocale:(id)arg3;
@property(readonly, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)initWithModel:(id)arg1;

@end

