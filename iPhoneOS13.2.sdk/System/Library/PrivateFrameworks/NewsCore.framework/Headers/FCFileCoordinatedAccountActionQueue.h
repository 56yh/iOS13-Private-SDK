//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCSyncFileCoordinatedDictionary;

@interface FCFileCoordinatedAccountActionQueue : NSObject
{
    FCSyncFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property(retain, nonatomic) FCSyncFileCoordinatedDictionary *fileCoordinatedDictionary; // @synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary;
- (_Bool)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(_Bool)arg2;
- (id)peekAtActionTypes;
- (_Bool)enqueueActionWithType:(long long)arg1;
- (_Bool)readLocalDataHint;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

