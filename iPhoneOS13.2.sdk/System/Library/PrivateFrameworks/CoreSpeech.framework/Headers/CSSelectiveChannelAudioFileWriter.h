//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioFileWriter-Protocol.h>

@class NSArray, NSString, NSURL;

@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter>
{
    _Bool isWriting;
    struct OpaqueExtAudioFile *fFile;
    struct AudioStreamBasicDescription inASBD;
    struct AudioStreamBasicDescription outASBD;
    NSArray *selectedChannelList;
    unsigned int _numberOfChannels;
    NSURL *_fileURL;
}

@property(readonly, nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (_Bool)addSamples:(const void *)arg1 numSamples:(long long)arg2;
- (_Bool)endAudio;
- (void)dealloc;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3 channelBitset:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

