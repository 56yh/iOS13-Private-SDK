//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DATrafficLogger : NSObject
{
    NSString *_filename;
}

+ (_Bool)enabled;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;
- (void)logSnippet:(id)arg1;
- (id)initWithFilename:(id)arg1;
- (void)_ensureCustomLogFile;

@end

