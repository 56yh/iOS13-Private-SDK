//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CallDBMetaInfo : NSObject
{
    NSURL *_dbInfoPrefFile;
}

@property(retain) NSURL *dbInfoPrefFile; // @synthesize dbInfoPrefFile=_dbInfoPrefFile;
- (_Bool)validateInfo:(_Bool)arg1;
- (void)writeDatabaseVersion:(long long)arg1 isTemp:(_Bool)arg2;
- (long long)readDatabaseVersion:(_Bool)arg1;
- (id)initWithURL:(id)arg1;

@end

