//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMBModelField, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultColumnTuple : HMFObject
{
    int _offset;
    NSString *_name;
    HMBModelField *_modelField;
}

@property(readonly, nonatomic) HMBModelField *modelField; // @synthesize modelField=_modelField;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3;

@end

