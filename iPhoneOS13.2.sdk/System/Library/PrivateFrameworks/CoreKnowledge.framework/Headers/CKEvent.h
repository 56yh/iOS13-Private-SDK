//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface CKEvent : NSObject
{
    NSString *_identifier;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDictionary *_metadata;
}

@property(readonly, retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;

@end

