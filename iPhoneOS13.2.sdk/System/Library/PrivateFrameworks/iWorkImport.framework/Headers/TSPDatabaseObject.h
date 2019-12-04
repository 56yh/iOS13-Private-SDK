//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSPDatabaseObject : NSObject
{
    int _classType;
    long long _identifier;
}

+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;
+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3;
@property(readonly, nonatomic) int classType; // @synthesize classType=_classType;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSString *fileState;
@property(readonly, nonatomic) _Bool hasFileState;
@property(readonly, nonatomic) long long dataState;
@property(readonly, nonatomic) _Bool hasDataState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2;
- (id)init;

@end

