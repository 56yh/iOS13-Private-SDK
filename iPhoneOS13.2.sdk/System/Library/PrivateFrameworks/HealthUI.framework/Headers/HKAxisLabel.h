//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HKAxisLabel : NSObject
{
    NSString *_text;
    id _location;
    long long _labelType;
}

@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(retain, nonatomic) id location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

