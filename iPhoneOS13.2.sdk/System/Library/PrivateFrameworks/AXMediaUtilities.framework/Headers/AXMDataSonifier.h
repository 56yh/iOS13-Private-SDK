//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMADSREnvelope, AXMAudioDataSource, AXMAudioDataSourceMixer, AXMLiveContinuousTone, NSPointerArray, NSTimer;

@interface AXMDataSonifier : NSObject
{
    struct OpaqueAudioComponentInstance *_audioUnit;
    CDStruct_79de6ffd _xData;
    CDStruct_79de6ffd _yData;
    _Bool _usesBinauralPanning;
    _Bool _playing;
    _Bool _paused;
    _Bool _scrubbing;
    _Bool _isEndingScrubbing;
    _Bool _isInLiveContinuousToneSession;
    int _dataMode;
    int _interpolationMode;
    double _minimumPlaybackFrequency;
    double _maximumPlaybackFrequency;
    double _playbackDuration;
    AXMADSREnvelope *_ampEnvelope;
    unsigned long long _toneWaveform;
    id /* block */ _function;
    AXMLiveContinuousTone *_continuousScrubbingTone;
    NSTimer *_playbackObserverUpdateTimer;
    AXMAudioDataSourceMixer *_playbackMixerDataSource;
    AXMAudioDataSource *_playbackChartDataAudioDataSource;
    AXMAudioDataSource *_playbackTrendlineAudioDataSource;
    AXMAudioDataSourceMixer *_scrubbingMixerDataSource;
    AXMAudioDataSource *_scrubbingDiscreteAudioDataSource;
    AXMAudioDataSource *_scrubbingContinuousAudioDataSource;
    AXMAudioDataSource *_scrubbingTrendlineAudioDataSource;
    AXMAudioDataSourceMixer *_liveContinuousMixerDataSource;
    AXMAudioDataSource *_liveContinuousAudioDataSource;
    NSPointerArray *_playbackObservers;
    AXMLiveContinuousTone *_trendlineScrubbingTone;
    AXMLiveContinuousTone *_liveContinuousDataTone;
    id /* block */ _trendlineFunction;
    vector_3203cf93 *_scrubbingDiscreteDataRenderingContext;
    vector_3203cf93 *_scrubbingPlaybackCallbackRenderingContext;
    vector_3203cf93 *_liveTonePlaybackCallbackRenderingContext;
    unsigned long long _playbackSampleCount;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) unsigned long long playbackSampleCount; // @synthesize playbackSampleCount=_playbackSampleCount;
@property(readonly, nonatomic) vector_3203cf93 *liveTonePlaybackCallbackRenderingContext; // @synthesize liveTonePlaybackCallbackRenderingContext=_liveTonePlaybackCallbackRenderingContext;
@property(readonly, nonatomic) vector_3203cf93 *scrubbingPlaybackCallbackRenderingContext; // @synthesize scrubbingPlaybackCallbackRenderingContext=_scrubbingPlaybackCallbackRenderingContext;
@property(readonly, nonatomic) vector_3203cf93 *scrubbingDiscreteDataRenderingContext; // @synthesize scrubbingDiscreteDataRenderingContext=_scrubbingDiscreteDataRenderingContext;
@property(copy, nonatomic) id /* block */ trendlineFunction; // @synthesize trendlineFunction=_trendlineFunction;
@property(readonly, nonatomic) AXMLiveContinuousTone *liveContinuousDataTone; // @synthesize liveContinuousDataTone=_liveContinuousDataTone;
@property(readonly, nonatomic) AXMLiveContinuousTone *trendlineScrubbingTone; // @synthesize trendlineScrubbingTone=_trendlineScrubbingTone;
@property(retain, nonatomic) NSPointerArray *playbackObservers; // @synthesize playbackObservers=_playbackObservers;
@property(retain, nonatomic) AXMAudioDataSource *liveContinuousAudioDataSource; // @synthesize liveContinuousAudioDataSource=_liveContinuousAudioDataSource;
@property(retain, nonatomic) AXMAudioDataSourceMixer *liveContinuousMixerDataSource; // @synthesize liveContinuousMixerDataSource=_liveContinuousMixerDataSource;
@property(retain, nonatomic) AXMAudioDataSource *scrubbingTrendlineAudioDataSource; // @synthesize scrubbingTrendlineAudioDataSource=_scrubbingTrendlineAudioDataSource;
@property(retain, nonatomic) AXMAudioDataSource *scrubbingContinuousAudioDataSource; // @synthesize scrubbingContinuousAudioDataSource=_scrubbingContinuousAudioDataSource;
@property(retain, nonatomic) AXMAudioDataSource *scrubbingDiscreteAudioDataSource; // @synthesize scrubbingDiscreteAudioDataSource=_scrubbingDiscreteAudioDataSource;
@property(retain, nonatomic) AXMAudioDataSourceMixer *scrubbingMixerDataSource; // @synthesize scrubbingMixerDataSource=_scrubbingMixerDataSource;
@property(retain, nonatomic) AXMAudioDataSource *playbackTrendlineAudioDataSource; // @synthesize playbackTrendlineAudioDataSource=_playbackTrendlineAudioDataSource;
@property(retain, nonatomic) AXMAudioDataSource *playbackChartDataAudioDataSource; // @synthesize playbackChartDataAudioDataSource=_playbackChartDataAudioDataSource;
@property(retain, nonatomic) AXMAudioDataSourceMixer *playbackMixerDataSource; // @synthesize playbackMixerDataSource=_playbackMixerDataSource;
@property(retain, nonatomic) NSTimer *playbackObserverUpdateTimer; // @synthesize playbackObserverUpdateTimer=_playbackObserverUpdateTimer;
@property(readonly, nonatomic) _Bool isInLiveContinuousToneSession; // @synthesize isInLiveContinuousToneSession=_isInLiveContinuousToneSession;
@property(readonly, nonatomic) AXMLiveContinuousTone *continuousScrubbingTone; // @synthesize continuousScrubbingTone=_continuousScrubbingTone;
@property(readonly, nonatomic) int interpolationMode; // @synthesize interpolationMode=_interpolationMode;
@property(readonly, nonatomic) _Bool isEndingScrubbing; // @synthesize isEndingScrubbing=_isEndingScrubbing;
@property(readonly, nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_scrubbing;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_paused;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_playing;
@property(readonly, nonatomic) id /* block */ function; // @synthesize function=_function;
@property(readonly, nonatomic) int dataMode; // @synthesize dataMode=_dataMode;
@property(nonatomic) _Bool usesBinauralPanning; // @synthesize usesBinauralPanning=_usesBinauralPanning;
@property(nonatomic) unsigned long long toneWaveform; // @synthesize toneWaveform=_toneWaveform;
@property(retain, nonatomic) AXMADSREnvelope *ampEnvelope; // @synthesize ampEnvelope=_ampEnvelope;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) double maximumPlaybackFrequency; // @synthesize maximumPlaybackFrequency=_maximumPlaybackFrequency;
@property(nonatomic) double minimumPlaybackFrequency; // @synthesize minimumPlaybackFrequency=_minimumPlaybackFrequency;
- (id)_newContinuousToneEnvelope;
- (void)_peakNormalizeBuffer:(vector_3203cf93 *)arg1 length:(unsigned long long)arg2 level:(double)arg3;
- (void)setLiveContinuousToneNormalizedFrequency:(double)arg1;
- (void)endLiveContinuousToneSession;
- (void)beginLiveContinuousToneSession;
- (_Bool)hasContinuousDataForXPosition:(double)arg1;
- (double)frequencyForYAxisValue:(double)arg1;
- (unsigned long long)sampleIndexForTimeOffset:(double)arg1;
- (unsigned long long)sampleIndexForXAxisValue:(double)arg1;
- (double)timeOffsetForXAxisValue:(double)arg1;
- (double)interpolatedYAxisValueForNormalizedPosition:(double)arg1;
- (double)xAxisValueForPosition:(double)arg1;
- (double)normalizedYAxisValueForValue:(double)arg1;
- (double)normalizedXAxisValueForValue:(double)arg1;
- (_Bool)_setOutputCallback;
- (_Bool)_setAudioFormat;
- (_Bool)_initializeAudioComponent;
- (_Bool)_uninitializeAudioUnit;
- (_Bool)_initializeAudioUnit;
- (void)_renderUnivariateFunctionAudio;
- (void)_renderContinuousAudio;
- (void)_renderDiscreteAudio;
- (void)loadDataAndRenderAudioForXAxis:(double *)arg1 yAxis:(double *)arg2 numValues:(unsigned long long)arg3 axisMinimumX:(double)arg4 axisMaximumX:(double)arg5 axisMinimumY:(double)arg6 axisMaximumY:(double)arg7 interpolationMode:(int)arg8 trendline:(id /* block */)arg9;
- (void)scrubToPlaybackFrame:(unsigned long long)arg1;
- (void)stopScrubbing;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)setPlaybackPosition:(double)arg1;
- (void)removePlaybackObserver:(id)arg1;
- (void)addPlaybackObserver:(id)arg1;
- (void)stopPlaying;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) double currentPlaybackPosition;
- (void)_initializeLiveToneDataSource;
- (void)_initializeAXMAudioDataSources;
- (void)dealloc;
- (id)init;

@end

