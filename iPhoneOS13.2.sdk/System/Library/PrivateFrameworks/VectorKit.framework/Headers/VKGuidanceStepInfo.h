//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGuidanceStepInfo : NSObject
{
    NSString *_roadName;
    int _routePoint;
}

@property(readonly, nonatomic) int routePoint; // @synthesize routePoint=_routePoint;
@property(readonly, retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
- (void)dealloc;
- (id)initWithRoadName:(id)arg1 point:(int)arg2;

@end

