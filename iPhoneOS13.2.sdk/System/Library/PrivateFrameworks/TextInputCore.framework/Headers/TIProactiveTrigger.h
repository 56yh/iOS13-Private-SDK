//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying>
{
    unsigned char _triggerSourceType;
    NSDictionary *_attributes;
}

@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) unsigned char triggerSourceType; // @synthesize triggerSourceType=_triggerSourceType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2;

@end

