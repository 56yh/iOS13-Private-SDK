//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CSSpeakerModel : NSObject
{
    NSString *_modelFileName;
    NSString *_languageCode;
    NSString *_modelPath;
    NSString *_utteranceDirectory;
    NSString *_tdtiModelPath;
    NSString *_tdtiUtteranceDirectory;
    NSString *_tiModelPath;
    NSString *_tiUtteranceDirectory;
}

@property(readonly, nonatomic) _Bool isValid;
- (void)discard;
@property(readonly, nonatomic) _Bool needsRetrain;
- (_Bool)_isDirectoryEmpty:(id)arg1;
@property(readonly, nonatomic) NSArray *enrollmentUtterance;
@property(readonly, nonatomic) NSString *tiUtteranceDirectory;
@property(readonly, nonatomic) NSString *tdtiUtteranceDirectory;
@property(readonly, nonatomic) NSString *utteranceDirectory;
@property(readonly, nonatomic) NSString *tdtiModelPath;
@property(readonly, nonatomic) NSString *tiModelPath;
@property(readonly, nonatomic) NSString *modelPath;
- (id)initWithSpeakerModelFileName:(id)arg1 languageCode:(id)arg2;

@end

