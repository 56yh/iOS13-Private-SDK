//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFWorkflowRecord;

@interface WFWorkflowCreationOptions : NSObject
{
    _Bool _deleted;
    WFWorkflowRecord *_record;
    NSString *_identifier;
    unsigned long long _location;
}

@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) WFWorkflowRecord *record; // @synthesize record=_record;
- (id)initWithRecord:(id)arg1;
- (id)init;

@end

