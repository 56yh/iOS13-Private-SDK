//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface CalLogFilter : NSObject
{
    int _minimumLevel;
    NSArray *_includes;
    NSArray *_excludes;
    NSArray *_includesAsRegexes;
    NSArray *_excludesAsRegexes;
    NSSet *_includesRegardlessOfLevel;
}

@property(copy, nonatomic) NSSet *includesRegardlessOfLevel; // @synthesize includesRegardlessOfLevel=_includesRegardlessOfLevel;
@property(retain, nonatomic) NSArray *excludesAsRegexes; // @synthesize excludesAsRegexes=_excludesAsRegexes;
@property(retain, nonatomic) NSArray *includesAsRegexes; // @synthesize includesAsRegexes=_includesAsRegexes;
@property(copy, nonatomic) NSArray *excludes; // @synthesize excludes=_excludes;
@property(copy, nonatomic) NSArray *includes; // @synthesize includes=_includes;
@property(nonatomic) int minimumLevel; // @synthesize minimumLevel=_minimumLevel;
- (_Bool)proceedProcessingLogName:(id)arg1;
- (id)generateRegexesForPatterns:(id)arg1;
- (id)description;
- (id)init;

@end

