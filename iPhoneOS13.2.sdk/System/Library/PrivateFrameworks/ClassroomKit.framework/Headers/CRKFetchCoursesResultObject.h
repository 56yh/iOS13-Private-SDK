//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject
{
    NSArray *_courses;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *courses; // @synthesize courses=_courses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

