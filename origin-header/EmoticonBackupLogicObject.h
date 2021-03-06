//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@protocol EmoticonBackupLogicObjectDelegate;

@interface EmoticonBackupLogicObject : MMObject
{
    _Bool m_isActive;
    _Bool _stopFileMagration;
    _Bool _m_hasStartLogic;
    id <EmoticonBackupLogicObjectDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)asyncMigrateFiles;
- (void)callOkDelegate;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isActive;
@property(nonatomic) __weak id <EmoticonBackupLogicObjectDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_hasStartLogic; // @synthesize m_hasStartLogic=_m_hasStartLogic;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(nonatomic) _Bool stopFileMagration; // @synthesize stopFileMagration=_stopFileMagration;
- (void)startBackup;
- (void)startLogic;

@end

