//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RUIActionSignal : NSObject
{
    unsigned long long _topSignal;
    NSMutableArray *_subActions;
}

+ (id)stringForActionSignal:(unsigned long long)arg1;
+ (id)signalWithType:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *subActions; // @synthesize subActions=_subActions;
@property(nonatomic) unsigned long long topSignal; // @synthesize topSignal=_topSignal;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

