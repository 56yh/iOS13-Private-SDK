//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGExternalEnrichment-Protocol.h>

@class NSMutableArray;

@interface SGURLContainer : NSObject <SGExternalEnrichment>
{
    NSMutableArray *_urls;
}

+ (_Bool)deleteAllURLsWithBundleIdentifier:(id)arg1 entityStore:(id)arg2;
- (void)flushWrites;
- (void)writeWithEntityStore:(id)arg1;
- (id)init;

@end

