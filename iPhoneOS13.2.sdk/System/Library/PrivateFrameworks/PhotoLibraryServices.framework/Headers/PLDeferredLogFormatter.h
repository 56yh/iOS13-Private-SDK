//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLDeferredLogFormatter : NSObject
{
    NSMutableArray *_entries;
}

+ (id)_serializableDictionaryForEntry:(id)arg1;
+ (_Bool)_isManagedObjectPointerForContext:(long long)arg1;
+ (id)_entityDescriptionForContext:(long long)arg1;
+ (id)_logTypeForContext:(long long)arg1;
- (id)stringWithFormat:(long long)arg1;
- (id)_plistString;
- (id)_JSONStringPretty:(_Bool)arg1;
- (id)_formattedStringForPrinting;
- (void)clear;
- (void)addLogWithContext:(long long)arg1 timestamp:(double)arg2 pointer:(unsigned long long)arg3;
- (id)init;

@end

