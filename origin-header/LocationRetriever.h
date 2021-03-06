//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ILocationMgrExt-Protocol.h"

@class CLHeading, LBSSystemCacheUpdater, MMTimer, NSMutableArray;
@protocol LocationRetrieveDelegate;

@interface LocationRetriever : NSObject <ILocationMgrExt>
{
    unsigned long long m_locationTag;
    unsigned long long m_headingTag;
    CLHeading *m_heading;
    _Bool m_bCanRepeatReportLocation;
    float m_requiredAccuracy;
    MMTimer *m_checkResultTimer;
    id <LocationRetrieveDelegate> m_delegate;
    NSMutableArray *m_recentLocationList;
    LBSSystemCacheUpdater *m_sysCacheUpdater;
    struct timeval m_tvStart;
    struct timeval m_tvFirst;
    _Bool m_bFirstRetriever;
    unsigned int m_firstRetrieverRange;
    _Bool m_bReport;
    _Bool m_bShieldAccuracy;
    int m_timeoutCount;
    unsigned long long m_eBusType;
    long long m_geoMode;
}

+ (double)getLocationAccuracy:(id)arg1;
- (void).cxx_destruct;
- (void)CancelRetrieveHeading;
- (void)CancelRetrieveLocation;
- (void)CleanDelegate;
- (void)Reset;
- (void)RetrieveHeading;
- (void)RetrieveLocation;
- (void)addToRecentLocationList:(id)arg1;
- (unsigned long long)countOfRecentLocationList;
- (void)dealloc;
- (id)getBestResultFromLocationList;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isHeadingOK:(id)arg1;
- (_Bool)isLocationOK:(id)arg1;
@property(nonatomic) _Bool m_bCanRepeatReportLocation; // @synthesize m_bCanRepeatReportLocation;
@property(nonatomic) _Bool m_bShieldAccuracy; // @synthesize m_bShieldAccuracy;
@property(nonatomic) __weak id <LocationRetrieveDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long long m_eBusType; // @synthesize m_eBusType;
@property(nonatomic) long long m_geoMode; // @synthesize m_geoMode;
@property(retain, nonatomic) NSMutableArray *m_recentLocationList; // @synthesize m_recentLocationList;
@property(nonatomic) float m_requiredAccuracy; // @synthesize m_requiredAccuracy;
@property(retain, nonatomic) LBSSystemCacheUpdater *m_sysCacheUpdater; // @synthesize m_sysCacheUpdater;
@property(nonatomic) int m_timeoutCount; // @synthesize m_timeoutCount;
- (id)objectInRecentLocationListAtIndex:(unsigned long long)arg1;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGpsTimerTimeCheck;
- (void)onHeadingChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingTimeCheck;
- (void)onMapLocationChanged:(id)arg1 withTag:(long long)arg2;
- (void)onMapLocationError:(id)arg1 withTag:(long long)arg2;
- (void)reportRetriever:(id)arg1 retrieverSuccess:(_Bool)arg2 inCache:(_Bool)arg3;
- (void)stopCheckTimer;

@end

