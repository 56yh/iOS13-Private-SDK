//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSString;

@interface TSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *mPreferredFormat;
    _Bool isDateOnly;
    _Bool isTimeOnly;
}

@property(nonatomic) _Bool isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) _Bool isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=mPreferredFormat;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (void)dealloc;

@end

