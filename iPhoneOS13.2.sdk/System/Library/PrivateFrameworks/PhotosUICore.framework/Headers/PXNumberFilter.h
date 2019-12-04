//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableNumberFilter-Protocol.h>

@class NSString;

@interface PXNumberFilter : PXObservable <PXMutableNumberFilter>
{
    struct {
        _Bool output;
    } _needsUpdateFlags;
    double _input;
    double _time;
    double _output;
    double _lastTime;
}

@property(readonly, nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic, setter=_setOutput:) double output; // @synthesize output=_output;
@property(nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) double input; // @synthesize input=_input;
- (void)_updateOutputIfNeeded;
- (void)_invalidateOutput;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)invalidateOutput;
@property(readonly, nonatomic) double currentTime;
- (void)setInput:(double)arg1;
- (void)_setLastTime:(double)arg1;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (double)updatedOutput;
- (double)initialOutputForInput:(double)arg1;
- (id)initWithInput:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

