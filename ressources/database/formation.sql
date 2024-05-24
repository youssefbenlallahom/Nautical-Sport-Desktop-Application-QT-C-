--------------------------------------------------------
--  Fichier créé - vendredi-mai-24-2024   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table FORMATION
--------------------------------------------------------

  CREATE TABLE "YOUSSEF"."FORMATION" 
   (	"ID" NUMBER, 
	"SPECIALITE" VARCHAR2(20 BYTE), 
	"LIEU" VARCHAR2(30 BYTE), 
	"DATED" DATE, 
	"DATEF" DATE, 
	"NIVEAU" VARCHAR2(20 BYTE), 
	"PRIX" NUMBER, 
	"ID_EMPLOYE" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table FORMATION
--------------------------------------------------------

  ALTER TABLE "YOUSSEF"."FORMATION" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Ref Constraints for Table FORMATION
--------------------------------------------------------

  ALTER TABLE "YOUSSEF"."FORMATION" ADD CONSTRAINT "FK_ID_EMPLOYE" FOREIGN KEY ("ID_EMPLOYE")
	  REFERENCES "YOUSSEF"."EMPLOYE" ("ID_EMPLOYE") ENABLE;
